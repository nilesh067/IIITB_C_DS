#include<stdio.h>
int *selectionsort(int *arr,int i,int j,int n);
int main(){
	int arr[10]={10,2,5,1,6,9,7,3,4,8},n=10;
	int *resultarr=selectionsort(arr,0,9,n);
	for(int i=0;i<n;i++){
		printf("%d\t",resultarr[i]);
	}
	return 0;
}
int *selectionsort(int *arr,int i,int j,int n){
//	int min=arr[0];
	for(int x=0;x<n-1;x++){
		int min=x;
		for(int y=x+1;y<n;y++){
			if(arr[min]>arr[y])min=y;
		}
		int temp=arr[x];
		arr[x]=arr[min];
		arr[min]=temp;
	}
	return arr;
}
