#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
	int newsock;
	char buff[BUFFER_SIZE];
	int newsock_cli;
	char *ip_name = "127.0.0.1";
	struct sockaddr_in addr;
	
	memset(&addr, 0, sizeof(struct sockaddr_in));//zeros out mememory of the addr struct
		addr.sin_family = AF_INET;
		addr.sin_port = htons(5555);
		addr.sin_addr.s_addr = inet_addr(ip_name);

	int sockfd;
	sockfd = socket(AF_INET, SOCK_STREAM,0);
	if (sockfd < 0)
	{
		perror("error creating socket\n");
		close(sockfd);
		exit(1);
	}else {
	printf("Socket created\n");
	}

	if (bind(sockfd, (struct sockaddr *) &addr, sizeof(addr)) < 0)
	{
		perror("ERROR binding the socket\n");
		close(sockfd);
		exit (1);
	}else {
	printf("Binding successful\n");
	}

	if (listen(sockfd,0) < 0)
	{
		perror("ERROR listening on the network\n");
		close(sockfd);
		exit(1);
	}else {
	printf("Listening...\n");
	}

	if ((newsock_cli = accept(sockfd, NULL, NULL)) < 0)
	{
		perror("ERROR accept failed\n");
		close(sockfd);
		exit (1);
	}else {
	printf("Client accept successful\n");
	}

	if(recv(newsock_cli, buff, sizeof(buff), 0) < 0){
		perror("CLIENT MESSAGE FAILED");
		close(newsock_cli);
		close(sockfd);
		exit(1);
	}

	printf("RECEIVED CLIENT MESSAGE:%s\n", buff);

	strcpy(buff, "Hello\n");//copies the hello and puts it in the buff variable
	send(newsock_cli,buff,strlen(buff),0);
	//send takes in the new socket from accept,pointer to data your sending,length or size of data in bytes,a flag

	close(newsock_cli);
	close(sockfd);

	return 0;
}
