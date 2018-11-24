//write a function returns the resultant linked list
Node* reverse(Node* first);
Node*  addTwoLists(Node* first, Node* second){
    
    Node* first1=reverse(first);
    
     Node* second1=reverse(second);
     printList(first1);
     printList(reverse(first));
     Node *result=NULL;
     Node *tmp=NULL;
     int sum=0,c=0;
     while(first1!=NULL||second1!=NULL){
         
         if(first1==NULL){
             sum=second1->data+c;
             second1=second1->next;
         }else if(second1==NULL){
             sum=first1->data+c;
             first1=first1->next;
             
         }else {
                sum=second1->data+first1->data+c;
                first1=first1->next;
                second1=second1->next;
         }
         c=sum%10;
         if(result==NULL){
         result=newNode(sum/10);
         }else{
             tmp=result;
             while(tmp){
                 tmp=tmp->next;
             }
             tmp=newNode(sum/10);
         }
     }
     return result;
  // Code here
}

Node* reverse(Node* first){
    Node *n,*p=NULL,*c=first;
    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    return p;
}
