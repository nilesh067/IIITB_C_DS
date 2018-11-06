#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
struct btree{
	int data;
	struct btree *lc;
	struct btree *rc;
};
struct btree * createBtree();
void travercePreorder(struct btree *root);
void travercePostorder(struct btree *root);
void traverceInorder(struct btree *root);
int main(){
	struct btree *root;
	root=createBtree();
	
	printf("Traversing In Order.. \n");
	traverceInorder(root);
	printf("Traversing Pre Order.. \n ");
	travercePreorder(root);
	printf("Traversing Post Order..  \n");
	travercePostorder(root);
	return 0;
}
struct btree * createBtree(){
	int x;
    printf("Enter data(-1 for no data):");
    scanf("%d",&x);
    struct btree *node;
    if(x==-1){
    	return NULL;
    }else{
    	node=(struct btree*)malloc(sizeof(struct btree));
		if(node!=NULL){
			node->data=x;
			printf("Enter Left Sub tree for parent %d \n",node->data);
			node->lc=createBtree();
			printf("Enter Right Sub tree for parent %d \n",node->data);
			node->rc=createBtree();
			return node;
		}else{
		return node;	
		}
     }
}
void travercePreorder(struct btree *root){
	if(root!=NULL){
		printf("%d\t",root->data);
		travercePreorder(root->lc);
		travercePreorder(root->rc);
			}
	
}

void traverceInorder(struct btree *root){
	if(root!=NULL){
		traverceInorder(root->lc);
		printf("%d\t",root->data);
		traverceInorder(root->rc);
			}
}
void travercePostorder(struct btree *root){
	if(root!=NULL){
		travercePostorder(root->lc);
		travercePostorder(root->rc);
		printf("%d\t",root->data);
			}
}
