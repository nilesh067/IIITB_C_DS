#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 1000000
struct node{
	long long int data;
	long long int key;
	struct node *next;
};
struct hashtable{
	struct node *head;
};
int size=0;
struct hashtable *table;
long long int getkey(long long data)
	{
	return (data%MAX);
	}
void init_hashtable(){
	for(long long int i=0;i<MAX;i++){
		table[i].head=NULL;
	}
}
void addElement(long long int data){
	long long int key=getkey(data);
	struct node *list=(struct node*)table[key].head;
	struct node *newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->key=key;
	newNode->next=NULL;
	if(list==NULL){
	table[key].head=newNode;
	size++;	
	}else{
		bool flag=false;
		while(list!=NULL){
		//go to end of link list
			if(list->data==data){
				//element already present in list
				printf("\nthe mobile no %lld already present",data);
				flag=true;
				break;
			}
			list=list->next;		
		}
		if(!flag){
			newNode->next=table[key].head;
			table[key].head=newNode;
			printf("\nthe mobile no %lld Inserted.",data);
			size++;	
		}
		
	}
}
void deleteElement(long long int data){
	long long int key=getkey(data);
	struct node *list=(struct node*)table[key].head;
	struct node *prev=list,*temp=NULL;;
	if(list==NULL){
		//no element mapped to this key
		printf("\n Mobile No not found.");
	}else{
		  bool flag=false;
                while(list!=NULL){
                //go to end of link list
                        if(list->data==data){
                                //element already present in list
  //                              printf("\nthe mobile no %lld already present",data);
                                flag=true;
                                break;
                        }
			prev=list;
                        list=list->next;
                }

			if(flag){
				//element found
				temp=list; 
				prev->next=list->next;
				printf("\nthe mobile no %lld Deleted ",data);
				free(temp);
				size--;
			}else{
				//no element found with this data
					printf("\n Mobile No not found Data Set.");
			}
		}
	
}
void searchElement(long long int data){
	long long int key=getkey(data);
	struct node* list=(struct node*)table[key].head;
	if(list==NULL){
		//no element mapped with this key
		printf("\n Mobile No %lld not found in Data Set.",data);
	}else{
		bool flag=false;
	        while(list!=NULL){
        	//go to end of link list
                 if(list->data==data){
			//element already present in list
//			printf("\nthe mobile no %lld already present",data);
                        flag=true;
                        break;
                        }
                 list=list->next;
                }

			if(flag){
				//element found 
			printf("\nthe mobile no %lld Find with key %lld ",data,key);
			}else{
				//no element found with this data
					printf("\n Mobile No not found Data Set.");
			}
		}
}
int main(){
	table=(struct hashtable*)malloc(sizeof(struct hashtable)*MAX);
	int choice,ch;
	long long int data;
	if(table!=NULL){
		init_hashtable();
		do{
			printf("\nEnter Your Choice !!");
			printf("\n1. Add Mobile No Into DataSet");
			printf("\n2. Delete No From DataSet");
			printf("\n3. Search No From Data Set\n");
			scanf("%d",&choice);
			switch(choice){
				
				case 1: {
						printf("\nEnter mobile No.\t");
						scanf("%lld",&data);
						addElement(data);
						break;
					}
				case 2: {
						printf("\nEnter mobile No.\t");
						scanf("%lld",&data);
						deleteElement(data);
					break;
				}
				case 3:{
						printf("\nEnter mobile No.\t");
						scanf("%lld",&data);
						searchElement(data);					
					break;
				}
				default: printf("\nWrong choice!!");
			}	
			printf("\nDo you want to Continue (Press 1 for continue)\t");
			scanf("%d",&ch);
		}while(ch==1);
	}else{
		printf("Not Enough Memory !!");
	}
	
}
