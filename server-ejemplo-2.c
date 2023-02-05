//Librerías
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <arpa/inet.h>
#include <pthread.h>

//Se crea la estructura
struct sockaddr_in c_addr;
char fname[100];

//Función enviar Archivo
void* SendFileToClient(int *arg)
{
      int connfd=(int)*arg;
      printf("Conexión Exitosa...ID: %d\n",connfd);
      printf("Conexión a Cliente: %s:%d\n",inet_ntoa(c_addr.sin_addr),ntohs(c_addr.sin_port));
       write(connfd, fname, 256);

        
        FILE *fp = fopen (fname,"rb");
        if (fp == NULL)
        {
            printf("Error...Falla de apertura en Archivo...\n");
            return 1;   
        }   

        /* Lectura de archivo y Envío */
        while(1)
        {
            /* Lectura de archivo en partes de 256 bytes */
            unsigned char buff[1024] = {0};
            int nread = fread(buff,1,1024,fp);
                   

            /* Si la lectura es correcta, enviar archivo. */
            if(nread > 0)
            {
                write(connfd, buff, nread);
            }
            if (nread < 1024)
            {
                if (feof(fp))
		{
            printf("Final del archivo...\n");
		        printf("Transferencia completa...Id: %d\n",connfd);
		}
                if (ferror(fp))
                    printf("Error de Lectura\n");
                break;
            }
        }
printf("Conexión terminada...ID: %d\n",connfd);
close(connfd);
shutdown(connfd,SHUT_WR);
sleep(2);
}


// función principal 
//Apertura de sockets y establecer conexión

int main(int argc, char *argv[])
{
    int connfd = 0,err;
    pthread_t tid; 
    struct sockaddr_in serv_addr;
    int listenfd = 0,ret;
    char sendBuff [1025];
    int numrv;
    size_t clen=0;

    listenfd = socket(AF_INET, SOCK_STREAM, 0);
    if(listenfd<0)
	{
	  printf("Error en creación de Socket...\n");
	  exit(2);
	}

    printf("Apertura de Socket...\n");

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr.sin_port = htons(5000);

    ret=bind(listenfd, (struct sockaddr*)&serv_addr,sizeof(serv_addr));
    if(ret<0)
    {
      printf("Error en BIND\n");
      exit(2);
    }

    if(listen(listenfd, 10) == -1)
    {
        printf("Falla en Escucha...\n");
        return -1;
    }

if (argc < 2) 
{
	printf("Ingrese el nombre del archivo a enviar: ");
        gets(fname);
}
else
   strcpy(fname,argv[1]);

    while(1)
    {
        clen=sizeof(c_addr);
        printf("Esperando...\n");
        connfd = accept(listenfd, (struct sockaddr*)&c_addr,&clen);
        if(connfd<0)
        {
	  printf("Error de LEctura...\n");
	  continue;	
	}
        err = pthread_create(&tid, NULL, &SendFileToClient, &connfd);
        if (err != 0)
            printf("\nNo puede crearse: [%s]\n", strerror(err));
   }
    close(connfd);
    return 0;
}
