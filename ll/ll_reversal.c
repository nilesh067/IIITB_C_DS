#include<stdio.h>
#include<stdlib.h>
#include"ll.h"
int main(){
	int ch,conti;
	printf("Createing Link List...\n");
	struct node *head=createlinkList();
	traverseList(head);
	printf("%d\n",noOfNode(head));


}
