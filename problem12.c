#include<stdio.h>
#include<stdlib.h>
/*program to find max area of histogram*/
int main(){
	int arr[]={4,3,8,10,9,7,12,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	int max=-999999;
	for(int i=0;i<n;i++){
		int l=arr[i];
		for(int j=i;j<n;j++){
			for(int k=i+1;k<j+1;k++){
			if(l>arr[k])l=arr[k];
			}
		
		if((j-i+1)*l>max)max=(j-i+1)*l;
		}
	}
	printf("area=%d",max);
}
