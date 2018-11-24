class GfG
{
    
	Node addTwoLists(Node first, Node second)
	{
	   // Your code here
	   Add_LinkedList ll=new Add_LinkedList();
	  /* System.out.println("First Before reverse");
	   ll.printList(first);
	   System.out.println("Second Before reverse");
	   ll.printList(second);
	   first=reverse(first);
     second=reverse(second);
     System.out.println("First after reverse");
     ll.printList(first);
     System.out.println("Second after reverse");
     ll.printList(second);
     System.out.println("");*/
     Node result=null;
     Node tmp=null;
     int sum=0,c=0;
     while(first!=null||second!=null){
         
         if(first==null){
             sum=second.data+c;
             second=second.next;
         }else if(second==null){
             sum=first.data+c;
             first=first.next;
         }else {
                sum=second.data+first.data+c;
                first=first.next;
                second=second.next;
         }
         c=sum/10;
         if(result==null){
         result=new Node(sum%10);
         }else{
             tmp=new Node(sum%10);
             tmp.next=result;
             result=tmp;
             tmp=null;
             //addLL(result,new Node(sum%10));
         }
     }
     if(c>0){
        tmp=new Node(c);
             tmp.next=result;
             result=tmp;
             tmp=null; 
     }
     return reverse(result);
	}
	
	Node reverse(Node first){
    Node n,p=null,c=first;
    while(c!=null){
        n=c.next;
        c.next=p;
        p=c;
        c=n;
    }
    return p;
    }
    void addLL(Node head,Node data){
        data.next=head;
        head.next=data;
    }
}
