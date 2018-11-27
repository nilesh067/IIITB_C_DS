#include<stdio.h>
void quicksort(int *arr,int p,int r);
int partition(int *arr,int p,int r);
int partition2(int *arr,int p,int q);
int main(void){
	int arr[10]={1,20,34,55,7,23,33,16,90,5};
	int i=0,j=9;
	quicksort(arr,i,j);
	for(i=0;i<=j;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
void quicksort(int *arr,int p,int r){
	if(p<r){
		int q=partition(arr,p,r);
		quicksort(arr,p,q-1);
		quicksort(arr,q+1,r);
	}
}

int partition(int *arr,int p,int r){
	int x=arr[r];
	int i=p-1;
	for(int j=p;j<r;j++){
		if(arr[j]<=x){
			i++;
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	 int temp=arr[i+1];
         arr[i+1]=arr[r];
         arr[r]=temp;
	 return i+1;
}





		

