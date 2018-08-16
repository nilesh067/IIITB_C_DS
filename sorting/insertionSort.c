#include<stdio.h>
int * insertionsort(int *arr,int i,int j,int n);
int main(){
	int arr[10]={10,2,5,1,6,9,7,3,4,8},n=10;
	int *resultarr=insertionsort(arr,0,9,n);
	for(int i=0;i<n;i++){
		printf("%d\t",resultarr[i]);
	}
	return 0;
}
int * insertionsort(int *arr,int i,int j,int n){
	for(int x=1;x<n;x++){
		int key=arr[x];
		int y=x-1;
		while(y>-1&&arr[y]>key){
			arr[y+1]=arr[y];
			y--;
		}
		arr[y+1]=key;
	}
	return arr;
}


