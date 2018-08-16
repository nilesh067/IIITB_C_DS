#include<stdio.h>
int * bubblesort(int *arr,int i,int j,int n);
int main(){
	int arr[10]={10,2,5,1,6,9,7,3,4,8},n=10;
	int *resultarr=bubblesort(arr,0,9,n);
	for(int i=0;i<n;i++){
		printf("%d\t",resultarr[i]);
	}
	return 0;
}
int * bubblesort(int *arr,int i,int j,int n){
	for(int x=0;x<n-1;x++){
		for(int y=x+1;y<n;y++){
			if(arr[x]>arr[y]){
				int temp=arr[x];
				arr[x]=arr[y];
				arr[y]=temp;
			}
		}
	}
	return arr;
}

