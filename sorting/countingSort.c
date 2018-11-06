#include<stdio.h>
#include<stdlib.h>
void countSort(int *arr,int *b,int n,int k);
int main(){
	int n,k=100;
	printf("Enter the size of array \t");
	scanf("%d",&n);
	int arr[n],b[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=(int)rand()%100;
	}
	printf("\nInput array...\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	countSort(arr,b,n,k);
	//sorted array
	printf("\nSorted array...\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}

	return 0;
}
void countSort(int *arr,int *b,int n,int k){
	int c[k];
	for(int i=0;i<k;i++){
	c[i]=0;
	}
	for(int i=0;i<n;i++){
	c[arr[i]]++;
	}
	for(int i=1;i<k;i++){
	c[i]=c[i]+c[i-1];
	}
	for(int i=0;i<n;i++){
	b[c[arr[i]]-1]=arr[i];
	c[arr[i]]=c[arr[i]]-1;
	}

}
