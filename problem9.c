#include<stdio.h>
#include<stdlib.h>
/*Find maximux product sub sequence*/
int productMax(int *arr,int i,int j);
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
}
int productMax(int *arr,int i,int j){
	for(int p=i;p<=j;p++){
		if()
