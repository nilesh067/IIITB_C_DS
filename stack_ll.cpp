#include<stdio.h>
#include<stdlib.h>
#define MAX 1000000
void push(struct stack **root,int data);
int pop(struct stack **root);
struct stack{
	int data;
	struct stack* ptr;
};

int main(){
	struct stack *top=NULL;
		char choice;
		int ch;
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
			push(&top,data);
			break;
		}
		case 2:{
			int data=pop(&top);
			printf("\nData : %d",data);
			break;
		}
		case 3:{
			struct stack* temp=top;
			while(temp){
				printf("%d\t",temp->data);
				temp=temp->ptr;
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

void push(struct stack **root,int data){
	struct stack *newData=(struct stack*)malloc(sizeof(struct stack));
	if(newData!=NULL){
		newData->data=data;
		newData->ptr=*root;
		*root=newData;	
	}else{
		printf("\nStack Overflow.");
	}
	
}
int pop(struct stack **root){
	if(*root==NULL){
		printf("\nNo Element In Stack");
		return 0;
	}else{
		struct stack* temp=*root;
		int data=temp->data;
		*root=(*root)->ptr;
		free(temp);	
		return data;
	}
	
	
}
