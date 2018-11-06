#include<stdio.h>
#include<stdlib.h>
#include"bst.h"
int main(){
	struct bst *root=NULL,*root2;
	int ch,data;
	do{
	printf("Enter Data\n");
	scanf("%d",&data);
	root=insert(root,data);
	printf("Insert More Press 1\n");
	scanf("%d",&ch);
	}while(ch==1);
	printf("Final Bst is \n");
	root2=root;
	inorderTraversal(root);
	printf("\nPreorder Of This Bst Is .. \n");
	preorderTraversal(root2);
}
