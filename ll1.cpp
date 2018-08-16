#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void insertBegining(struct node **start);
int main(){
	struct node *start=NULL;
	int n=0;
	printf("Enter No Of Node Want to Insert.\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		insertBegining(&start);
	}
	struct node *temp=start;
	while(temp!=NULL){
		printf("%d\t",temp->data);
		temp=temp->next;
	}

	return 0;
}
	void insertBegining(struct node **start){
		int item;
		printf("Enter Item\n");
		scanf("%d",&item);
		struct node *newNode=(struct node*)malloc(sizeof(struct node));
		if(newNode!=NULL){
			newNode->data=item;
			newNode->next=*start;
			*start=newNode;
		}else{
			printf("Not Enough Memory");
		}	
	}
