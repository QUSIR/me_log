#include<unistd.h>  
#include<sys/socket.h>  
#include<netinet/in.h>  
#include<arpa/inet.h>  
#include<stdio.h>  
#include<stdlib.h>  
#include<errno.h>  
#include<string.h>  
  
#define BUF_SIZE 1024  
   
int main()  
{  
	/* 服务端地址 */  
	struct sockaddr_in server_addr;  
	bzero(&server_addr, sizeof(server_addr));  
	server_addr.sin_family = AF_INET;  
	server_addr.sin_addr.s_addr = inet_addr("191.8.2.43");  
	server_addr.sin_port = htons(514);  
	   
	/* 创建socket */  
	int client_socket_fd = socket(AF_INET, SOCK_DGRAM, 0);  
	if(client_socket_fd < 0)  
	{  
		  perror("Create Socket Failed:");  
		    exit(1);  
	}  
	   
	//发送  
	if(sendto(client_socket_fd, "Hello World!", sizeof("Hello World!"),0,(struct sockaddr*)&server_addr,sizeof(server_addr)) < 0)  
	{  
		  perror("Send File Name Failed:");  
		    exit(1);  
	}  
	   
	close(client_socket_fd);  
	return 0;  
}


