#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include"btree.h"
int main(){
	struct btree *root;
	root=createBtree();
	
	printf("Traversing In Order.. \n");
	traverceInorder(root);
	printf("\nTraversing Pre Order.. \n");
	travercePreorder(root);
	printf("\nTraversing Post Order..  \n");
	travercePostorder(root);
	printf("\n");
	return 0;
}
