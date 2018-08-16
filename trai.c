#include<stdio.h>
#include<stdbool.h>
#define MAXCHILD 26
struct traiNode{
	char val;
	struct traiNode *child[MAXCHILD];
	bool isLeaf;
};
struct traiNode createNewNode(char ch){
	struct traiNode newNode;
	newNode=(struct traiNode*)malloc(sizeof(struct traiNode));
	if(newNode){
		newNode->val=ch;
		newNode->isLeaf=false;
		for(int i=0;i<MAXCHILD;i++){
			newNode->child[i]=NULL;
		}
		return newNode;
	}else{
		printf("/n Not Enough Memory In Heap Area");
		exit(1);
	}
}
int getIndex(char ch){
	return (int)(ch-'a');
}
void insert(struct traiNode *root,char *str){
	int lenght=strlen(str);
	struct traiNode *temp=root;
	char c;
	for(int i=0;i<length;i++){
		c=&str;
		str++;
		int index=getIndex(c);
		if(!temp->child[index]){
			temp->child[index]=createNewNode(c);
		}
		temp=temp->child[index];
	}
	temp=temp->isLeaf=true;
}

int main(){
	/*char *a,b;
	char* c,d;
       printf("a=%ld\n",sizeof(a));	
       printf("b=%ld\n",sizeof(b));
       printf("c=%ld\n",sizeof(c));
       printf("d=%ld",sizeof(d));*/
	char *words[8]={"bear","bell","bid","bull","boy","sell","stock","stop"};
	for(int i=0;i<8;i++){
		printf("words[%d]=%s\n",i,words[i]);
	}
//	struct traiNode root=(struct traiNode*)malloc(sizeof(struct traiNode));
	struct traiNode *root=createNewNode('r');
	if(root!=NULL){
		for(int i=0;i<8;i++){
			char *temp=word[i];
			while(char!=NULL){

			}
		}
	}else{
		//not enough memory
		printf("\nNot Enough Memory!!");
	}
return 0;
}
