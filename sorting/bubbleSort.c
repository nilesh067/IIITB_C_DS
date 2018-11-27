#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int * bubblesort(int *arr,int i,int j,int n);
int main(){
	int arr[1000000]={0},n=1000000;
	for(int i=0;i<1000000;i++){
		arr[i]=rand()%1000;
	}
	clock_t start,end;
	start=clock();
	int *resultarr=bubblesort(arr,0,9,n);
	end=clock();
	double timetaken=((double)end-start)/CLOCKS_PER_SEC;
	for(int i=0;i<n;i++){
		printf("%d\t",resultarr[i]);
	}
	printf("%lf\t",timetaken);
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

