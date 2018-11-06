#include<stdio.h>
#include<stdlib.h>
/*program for finding first minimum no on right side*/
int main(){
	int arr[]={4,3,8,10,9,7,12,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	int minLArr[n];
	int minRArr[n];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){minRArr[i]=j;break;}
			{minRArr[i]=0;}
		}
	}
	minLArr[0]=0;
	for(int i=n-1;i>0;i--){
		for(int j=i-1;j>=0;j--){
			if(arr[j]<arr[i]){minLArr[i]=j;break;}
			minLArr[i]=0;
		}
	}
	printf("Original Array\n");
	for(int i=0;i<n;i++){
	printf("%d\t",arr[i]);
	}
	printf("\nFirst Min From Right\n");
	for(int i=0;i<n;i++){
	printf("%d\t",minRArr[i]);
	}
	printf("\nFirst Min From Left\n");
	for(int i=0;i<n;i++){
	printf("%d\t",minLArr[i]);
	}
}
