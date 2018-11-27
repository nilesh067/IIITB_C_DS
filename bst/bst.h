struct bst{
	int key;
	struct bst *lc,*rc,*p;
};

struct bst * newNode(int data){
	struct bst *node;
	node=(struct bst *)malloc(sizeof(struct bst));
	if(node!=NULL){
		node->key=data;
		return node;
	}else{
		printf("Not Enough Memory\n");
		return NULL;
	}
}
struct bst * insert(struct bst * root,int data){
	if(root==NULL)return newNode(data);
	else{
		if(data>root->key){
		root->rc=insert(root->rc,data);}
		else{
		root->lc=insert(root->lc,data);}
		return root;
	}
}
void inorderTraversal(struct bst *root){
	if(root!=NULL){
		inorderTraversal(root->lc);
		printf("%d\t",root->key);
		inorderTraversal(root->rc);
	}
}
void preorderTraversal(struct bst *root){
	if(root!=NULL){
		printf("%d\t",root->key);
		preorderTraversal(root->lc);
		preorderTraversal(root->rc);
		}
}
