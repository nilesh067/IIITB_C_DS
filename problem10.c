#include<stdio.h>
#include<stdlib.h>
/*Count No of Inversion Pair*/
int countNoOfInversion(int *arr,int i,int j);
int modifed_merge(int *arr,int p,int q,int r);
int main(){
	int sum,i,j,n;
	printf("Enter the size of array\t");
	scanf("%d",&n);
	j=n-1;
	int arr[n];
	for(int k=0;k<n;k++){
		arr[k]=rand()%100;
	}
	printf("Input Array is : \n");
	for(int k=0;k<n;k++){
                printf("%d\t",arr[k]);
	} 
	printf("\n");
	int inversion_count=countNoOfInversion(arr,0,j);
	printf("No of Inversion Id %d\n",inversion_count);
}
int countNoOfInversion(int *arr,int i,int j){
	int mid,inversion_count=0;
	if(i<j){
		mid=(i+j)/2;
		inversion_count=countNoOfInversion(arr,i,mid);
		inversion_count+=countNoOfInversion(arr,mid+1,j);
		inversion_count+=modifed_merge(arr,i,mid,j);
	}
	return inversion_count;
}
int modifed_merge(int *a,int p,int q,int r){
	int L=p,R=q+1,i=0,arr[r-p+1],inversion_count=0;
	while(L<=q&&R<=r){
		if(a[L]<=a[R])arr[i++]=a[L++];
		else {
			arr[i++]=a[R++];
			inversion_count+=(q-L+1);
			}
	}
	while(L<=q)arr[i++]=a[L++];
	while(R<=r)arr[i++]=a[R++];
	L=p;i=0;
	while(L<=r)a[L++]=arr[i++];
	return inversion_count;
}

