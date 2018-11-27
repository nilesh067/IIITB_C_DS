#include<stdio.h>
#include<string.h>
int main(){
	char *names[5];
	char n_ame[20];
	for(int i=0;i<5;i++){
	names[i]=fgets(n_ame,19,stdin);
	printf("%s\n",names[i]);
	}
	/*names[0]="nilesh";
	names[1]="kumar";
	names[2]="singh";
	names[3]="hello";
	names[4]="priyesh";*/
	printf("\n");
	printf("%s\n",names[1]);
	printf("%s\n",names[2]);
	printf("%s\n",names[3]);
	printf("%s\n",names[4]);
	printf("%s\n",names[0]);
}
