#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define Buffer_size 1024

int main()
{
    int client_sock;
    char buff[Buffer_size];
    char *ip_addr = ("127.0.0.1");
    struct sockaddr_in addr;
//sizeof takes in the size of the struct not the name of the struct
    memset(&addr, 0, sizeof(struct sockaddr_in));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(5555);
    addr.sin_addr.s_addr = inet_addr(ip_addr);

    client_sock = socket(AF_INET, SOCK_STREAM, 0);

    if (client_sock < 0)
    {
        perror("ERROR CREATING SOCKET\n");
        close(client_sock);
        exit(1);
    }else {
    printf("Client socket created successfully\n");
    }

    if (connect(client_sock, (struct sockaddr *)&addr, sizeof(addr)) < 0)
    {
        perror("Failed to connect");
        close(client_sock);
        exit(1);
    }
    else
    {
        printf("Connected to server\n");
    }
    strcpy(buff, "HELLO");
    send(client_sock, buff, strlen(buff), 0);

    recv(client_sock, buff, sizeof(buff), 0);
    printf("Server message:%s\n", buff);

    close(client_sock);

    return 0;
}