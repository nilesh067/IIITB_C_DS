#include<stdio.h>
#include<stdlib.h>
#include"avl.h"
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
	printf("\nEnter key To Search \n");
	int key;
	printf("root is %d\n",root->key);
	scanf("%d",&key);
	if(search(root,key)>0){printf("Data Found \n");}
	if(serach_rec(root,key)>0){printf("Data Found \n");}
	printf("Enter key to Find In Order Successor\n");
	int findSucc;
	scanf("%d",&findSucc);
	struct bst *node=searchNode(root,findSucc);
	struct bst *node2=inorderSuccessor(node);
	if(node2)printf("In Order Successer Is %d",node2->key);
	/*
	printf("Enter Key To delete\n");
	int del;
	scanf("%d",&del);
	deleteNode(root,del);
	printf("After deleting node \n");
	inorderTraversal(root);*/
}
