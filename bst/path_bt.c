#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
struct btree{
	int data;
	struct btree *left;
	struct btree *right;
};
struct btree* createBtree(){
	struct btree *node;
	int x;
	printf("Enter data (-1) for No Data\n");
	scanf("%d",&x);
	if(x!=-1){
	node=(struct btree*)malloc(sizeof(struct btree));
	if(node!=NULL){
		node->data=x;
		printf("Enetr Btree left node for %d :: \n",x);
		node->left=createBtree();
		printf("Enetr Btree right node for %d :: \n",x);
		node->right=createBtree();
		return node;
	}
	}else{
		return NULL;
	}

}
void traverse(struct btree *root){
	
	if(root!=NULL){
		traverse(root->left);
		printf("%d\t",root->data);
		traverse(root->right);
	}

}
void convertBTtoDLL(struct btree *root,struct btree **head){
	if(root==NULL)return;
	static struct btree *prev=NULL;
	convertBTtoDLL(root->left,head);
	if(prev==NULL){
	*head=root;
	}else{
	root->left=prev;
	prev->right=root;
	}
	prev=root;
	convertBTtoDLL(root->right,head); 
}
void ll_travrse(struct btree *head){
	while(head!=NULL){
	printf("%d\t",head->data);
	head=head->right;
	}
}
int main(){

	struct btree *root;
	root=createBtree();
	traverse(root);

	/*struct btree *head;
	printf("\n Converting to DLL \n");
	convertBTtoDLL(root,&head);
	ll_travrse(head);*/
	
}
