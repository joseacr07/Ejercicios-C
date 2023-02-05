/*
Receive a file over a socket.

Saves it to output.tmp by default.

Interface:

    ./executable [ []]

Defaults:

- output_file: output.tmp
- port: 12345
*/

#define _XOPEN_SOURCE 700

#include <sys/sendfile.h>
#include <stdio.h>
#include <netdb.h>
#include <sys/types.h>
#include  /* getprotobyname */
#include <sys/sockets.h>
#include 
#include 
#include 

int main(int argc, char **argv) 
//variables
    char *file_path = "output.tmp"; //direccion de archivo
    char buffer[BUFSIZ]; //buffer
    char protoname[] = "tcp"; //protocolo
    int client_sockfd; //variable  del cliente
    int enable = 1;
    int filefd; //variable del archivo
    int i;
    int server_sockfd; //socket 
    socklen_t client_len;
    ssize_t read_return;
    struct protoent *protoent;
    struct sockaddr_in client_address, server_address;
    unsigned short server_port = 12345u;

    //argumentos
    
    if (argc > 1) 
        file_path = argv[1];
        if (argc > 2) 
            server_port = strtol(argv[2], NULL, 10);
        
    

    /* Create a socket and listen to it.. */
    protoent = getprotobyname(protoname);
    if (protoent == NULL) 
        perror("getprotobyname");
        exit(EXIT_FAILURE);
    
    server_sockfd = socket(
        AF_INET,
        SOCK_STREAM,
        protoent->p_proto
    );
    if (server_sockfd == -1) 
        perror("socket");
        exit(EXIT_FAILURE);
    
    if (setsockopt(server_sockfd, SOL_SOCKET, SO_REUSEADDR, &enable, sizeof(enable)) < 0) 
        perror("setsockopt(SO_REUSEADDR) failed");
        exit(EXIT_FAILURE);
    
    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = htonl(INADDR_ANY);
    server_address.sin_port = htons(server_port);
    if (bind(
            server_sockfd,
            (struct sockaddr*)&server_address,
            sizeof(server_address)
        ) == -1
    ) 
        perror("bind");
        exit(EXIT_FAILURE);
    
    if (listen(server_sockfd, 5) == -1) 
        perror("listen");
        exit(EXIT_FAILURE);
    
    fprintf(stderr, "listening on port %dn", server_port);

    while (1)  S_IWUSR);
        if (filefd == -1) 
            perror("open");
            exit(EXIT_FAILURE);
        
        do 
            read_return = read(client_sockfd, buffer, BUFSIZ);
            if (read_return == -1) 
                perror("read");
                exit(EXIT_FAILURE);
            
            if (write(filefd, buffer, read_return) == -1) 
                perror("write");
                exit(EXIT_FAILURE);
            
         while (read_return > 0);
        close(filefd);
        close(client_sockfd);
    
    return EXIT_SUCCESS;