#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool sumOfSubset(int *arr,int n,int sum);
int main(){
	int arr[]={3, 34, 4, 12, 5, 2}; 
	int sum=9;
	int size=sizeof(arr)/sizeof(arr[0]);
	if(sumOfSubset(arr,size,sum)){
	printf("True");
	}else{
	printf("False");
	}

}
bool sumOfSubset(int *arr,int n,int sum){
	if(sum==0)return true;
	if(n==0&&sum!=0)return false;
	if(sum<arr[n-1]) return sumOfSubset(arr,n-1,sum);
	return sumOfSubset(arr,n-1,sum-arr[n-1])||sumOfSubset(arr,n-1,sum);
}
