#include<stdio.h>
#define MAX 1000000
void push(int data);
int pop();
	int ch,arr[MAX];
	static int top;
int main(){
	char choice;
	do{
	printf("Enter choice.\n");
	printf("1.Push()\n");
	printf("2.Pop()\n");
	printf("3.Traverce()\n");
	scanf("%d",&ch);

	switch(ch){
		case 1: {
			int data;
			printf("\nEnter the data : ");
			scanf("%d",&data);
			push(data);
			break;
		}
		case 2:{
			int data=pop();
			printf("\nData : %d",data);
			break;
		}
		case 3:{
			for(int i=0;i<top;i++){
				printf("%d\t",arr[i]);
			}
			break;
		}
		default:  printf("\nwrong choice");
	}
 	printf("\ndo you want to continue y/n");
    fflush(stdin);
    scanf("%c",&choice);
    }while((choice=='Y')||(choice=='y'));
   
 
}
  void push(int data){
   	if(top==MAX){
   		printf("\nStack Overflow!!");
   	}else{
   		arr[top++]=data;
	   }
   } 
   int pop(){
   	if(top==0){
   		printf("\nNo Element In Stack");
   		return 0;
   	}else{
   		int data=arr[--top];
   		return data;
   	}
   }

