#include<stdio.h>
#include<stdlib.h>
#define MAX 100000
/*Min Heap*/
void add(int *arr,int n);
void bottomup_Heapify(int *arr,int n);
void topdown_Heapify(int *arr,int n);
void show(int *arr,int n);
int deleteMin(int *arr);
void buildHeap(int *arr,int n);
int n=0;
int main(){
	int arr[MAX]={0};
	        for(int k=0;k<10;k++){
                  //add(arr,rand()%100);
		  arr[n++]=rand()%100;
          	}
		show(arr,n);
		buildHeap(arr,n);
		printf("\n");
		show(arr,n);
		for(int k=0;k<5;k++){
			printf("\nDELETING %d ..\n",deleteMin(arr));
			show(arr,n);
		}
}
void buildHeap(int *arr,int n){
	for(int i=n/2;i>=0;i--){
	topdown_Heapify(arr,i);	
	}
}
void show(int *arr,int n){
	for(int i=0;i<n;i++){
	printf("%d\t",arr[i]);
	}
}
void add(int *arr,int x){
	arr[n++]=x;
	bottomup_Heapify(arr,n-1);
}
void bottomup_Heapify(int *arr,int i){
	int p=(i-1)/2;
	while(i>0&&arr[p]>arr[i]){
		int temp=arr[p];
		arr[p]=arr[i];
		arr[i]=temp;
		i=p;p=(i-1)/2;
	}
}
void topdown_Heapify(int *arr,int i){
	int lc=2*i+1,rc=2*i+2,l;
	while(rc<n){
		if(arr[lc]<arr[rc])l=lc;
		else l=rc;
		if(arr[l]>=arr[i])return;
		else{
			int temp=arr[i];
			arr[i]=arr[l];
			arr[l]=temp;
			i=l;lc=2*i+1;rc=2*i+2;
		
		}
	}
	if(lc<n){
		if(arr[i]>arr[lc]){
			int temp=arr[i];
			arr[i]=arr[lc];
			arr[lc]=temp;
			}
		}
}
int deleteMin(int *arr){
	if(n>=1){
	int x=arr[0];
	arr[0]=arr[--n];
	topdown_Heapify(arr,0);
	return x;
	}else return 0;
}
