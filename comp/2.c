#include<stdio.h>
int main(){
	char c;
	printf("Enter  q to terminate \n");
	do{
		printf("Enter a character \n");
		scanf("%c",&c);
		getchar();
		printf("%c\n",c);
		}while(c!='q');
		}
