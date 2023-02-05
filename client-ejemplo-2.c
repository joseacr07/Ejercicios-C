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


void gotoxy(int x, int y)
{
  printf("%c[%d;%df", 0x1B, y, x);
}

//función principal
int main(int argc, char *argv[])
{
  system("clear");
  int sockfd = 0;
  int bytesReceived = 0;
  char recvBuff[1024];
  memset(recvBuff, '0', sizeof(recvBuff));
  struct sockaddr_in serv_addr;

  // Creación de socket
  if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
  {
    printf("\n Error : Could not create socket \n");
    return 1;
  }

  // Iniciando Socket
 
  serv_addr.sin_family = AF_INET;
  serv_addr.sin_port = htons(5000); // port
  serv_addr.sin_addr.s_addr = inet_addr("");
 

  char user [20];
  char pass [10];

  printf ("Ingresar Usuario: ");
  fgets (user, 20, stdin);
  printf ("Ingresar contraseña: ");
  fgets (pass, 10, stdin);

  while(1){
    if (strstr(pass, "socket") == NULL) {
    puts("Contraseña incorrecta\n");
    printf ("Ingresar Usuario: ");
    fgets (user, 20, stdin);
    printf ("Ingresar contraseña: ");
    fgets (pass, 10, stdin);  
  } else {
    printf ("Bienvenido/a: %s", user);
    break;
    }
  }
  //Generando conexión

  if (connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
  {
    printf("\n Error : Connect Failed \n");
    return 1;
  }

  printf("Connected to ip: %s : %d\n", inet_ntoa(serv_addr.sin_addr), ntohs(serv_addr.sin_port));

  // Creación de archivo 
  FILE *fp;
  char fname[100];
  read(sockfd, fname, 100);
 
  printf("Nombre de Archivo: %s\n", fname);
  printf("Iniciando Transferencia...");
  fp = fopen(fname, "ab");
  if (NULL == fp)
  {
    printf("Error...ARchivo no encontrado");
    return 1;
  }
  long double sz = 1;
  //Recibiendo datos en partes de 256 bytes
  
  while ((bytesReceived = read(sockfd, recvBuff, 1024)) > 0)
  {
    sz++;
    gotoxy(0, 4);
    printf("Received: %Lf Mb", (sz / 1024));
    fflush(stdout);
    // recvBuff[n] = 0;
    fwrite(recvBuff, 1, bytesReceived, fp);
    // printf("%s \n", recvBuff);
  }

  if (bytesReceived < 0)
  {
    printf("\n Error de Lectura\n");
  }
  printf("\nTransferencia Completa...\n");
  return 0;
}
