#include<stdio.h>
#include<stdlib.h>
struct btree{
	int data;
	struct btree *lc;
	struct btree *rc;
};
btree *createBtree();
void travercePreorder(btree *root);
void travercePostorder(btree *root);
void traverceInorder(btree *root);
int main(){
	struct btree *root;
	root=createBtree();
	printf("\n Traversing In Order..  ");
	traverceInorder(root);
	printf("\nTraversing Pre Order..  ");
	travercePreorder(root);
	printf("\nTraversing Post Order..  ");
	travercePostorder(root);
	return 0;
}
btree *createBtree(){
	int x;
    printf("Enter data(-1 for no data):");
    scanf("%d",&x);
    btree *node;
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
void travercePreorder(btree *root){
	if(root!=NULL){
		printf("%d\t",root->data);
		travercePreorder(root->lc);
		travercePreorder(root->rc);
			}
	
}

void traverceInorder(btree *root){
	if(root!=NULL){
		traverceInorder(root->lc);
		printf("%d\t",root->data);
		traverceInorder(root->rc);
			}
}
void travercePostorder(btree *root){
	if(root!=NULL){
		travercePostorder(root->lc);
		travercePostorder(root->rc);
		printf("%d\t",root->data);
			}
}
