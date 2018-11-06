struct node{
int data;
struct node *next;
};

struct node* createlinkList(){
	printf("Enter Data (-1 for No Data or End of List)\t");
	int data;
	struct node *newNode;
	scanf("%d",&data);
	if(data==-1){
	return NULL;
	}else{
		newNode=(struct node*)malloc(sizeof(struct node));
		if(newNode){
			newNode->data=data;
			newNode->next=createlinkList();
			return newNode;
			}
			else{
				return newNode;
			}
		}
	}
void traverseList(struct node* head){	
	printf("Traversing Nodes of LinkList\n");
	if(head){
	while(head){
		printf("%d\t",head->data);
		head=head->next;
		}
	}else{
	printf("Empty LinkList\n");
	}
	}
int noOfNode(struct node* head){	
	printf("Counting No of Nodes of Given LinkList\n");
	int count=0;
	while(head){
		//printf("%d\t",head->data);
		count++;
		head=head->next;
		}
		return count;
	}
struct node* midOfList(struct node* head){
	if(head){
	struct node *ptr1=head;
	struct node *ptr2=head;
	while(ptr1&&ptr1->next){
		ptr1=ptr1->next->next;
		ptr2=ptr2->next;
	}
	return ptr2;
	}else{
	return NULL;
	}
}
struct node* reverseList(struct node* head){
	
	struct node *p=NULL,*c=head,*n=NULL;
	while(c){
		n=c->next;
		c->next=p;
		p=c;
		c=n;
	}
	return p;
	}
void IB(struct node** head,int data){
	struct node* newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->next=(*head);
	*head=newNode;
	}
void IE(struct node* head,int data){
	struct node* newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->next=NULL;
	while(head->next!=NULL){
	head=head->next;
	}
	head->next=newNode;
	}
void IL(struct node* head,int x,int data){
	struct node* newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->next=NULL;
	while(head->next!=NULL&&head->data!=x){
	head=head->next;
	}
	if(head->data==x){
		newNode->next=head->next;
		head->next=newNode;
	}
	else{
	printf("No X no Y\n");
	}
	}

