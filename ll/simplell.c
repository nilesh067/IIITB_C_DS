#include<stdio.h>
#include<stdlib.h>
#include"ll.h"
int main(){
	int ch,conti;
	printf("Createing Link List...\n");
	struct node *head=createlinkList();
	traverseList(head);
	printf("%d\n",noOfNode(head));
	/*struct node *mid=midOfList(head);
	if(mid){
		printf("Mid Element Of Link List Is %d\n",mid->data);
	}else{
	printf("No Mid Elelment\n");
	}
	printf("Reversing Link List\n");
	head=reverseList(head);
	traverseList(head);*/
	do{
	printf("Enter Choice\n");
	printf("1.Insertion\n");
	printf("2.Deletion\n");
	printf("3.Searching\n");
	printf("4.Reversal\n");
	printf("5.Traversal\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:{
			int choice,conti;
			do{
			printf("Insertion :: Enter Choice\n");
			printf("Insertion :: 1.Insertion At Begining\n");
			printf("Insertion :: 2.Insertion At End\n");
			printf("Insertion :: 3.Insertion After an Element\n");
			scanf("%d",&choice);
			switch(choice){
				case 1:{
					printf("Enter Data\t");
					int data;
					scanf("%d",&data);
					IB(&head,data);
					traverseList(head);
					break;}
				case 2:{
					printf("Enter Data\t");
					int data;
					scanf("%d",&data);
					IE(head,data);
					traverseList(head);
					break;}
				case 3:{
					int x,data;
					printf("Enter Location After which you want to insert\t");
					scanf("%d",&x);
					printf("Enter Data\t");
					scanf("%d",&data);
					IL(head,x,data);
					traverseList(head);
					break;}
				default:{printf("Insertion :: Invalid Choice\n");}
				}
				printf("Insertion :: Do You Want To Continue (Press 1)\n");
				scanf("%d",&conti);
				}while(conti==1);
			break;}
		case 2:{
			int choice,conti;
			do{
			printf("Deletion :: Enter Choice\n");
			printf("Deletion :: 1.Insertion At Begining\n");
			printf("Deletion :: 2.Insertion At End\n");
			printf("Deletion :: 3.Insertion After an Element\n");
			scanf("%d",&choice);
			switch(choice){
				case 1:{break;}
				case 2:{break;}
				case 3:{break;}
				default:{printf("Deletion :: Invalid Choice\n");}
				}
				printf("Deletion :: Do You Want To Continue (Press 1)\n");
				scanf("%d",&conti);
				}while(conti==1);	
			break;}
		case 3:{
			printf("Searching :: Enter an Element To Be Search\n");
			int element;
			scanf("%d",&element);
			break;}
		case 4:{
			reverseList(head);
			traverseList(head);
			break;}
		case 5:{
			traverseList(head);
			break;}
		default:{printf("Invalid Choice\n");}
	}
	printf("Do You Want To Continue (Press 1)\n");
	scanf("%d",&conti);
	}while(conti==1);
	printf("Bye\n");
	}

