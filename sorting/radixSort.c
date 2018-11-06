#include<stdio.h>
#include<stdlib.h>
void radixSort(int *arr,int n);
void countSort(int *arr,int n,int exp);
int getmax(int *arr,int n);
int main(){
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=rand()%999;
		}
	printf("Input array\n");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
		}
	radixSort(arr,n);
	printf("\nSorted array\n");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
		}
	}
int getmax(int *arr,int n){
	int max=arr[0];
	for(int i=1;i<n;i++){
		if(max>arr[i])max=arr[i];
		}
	return max;
	}
void radixSort(int *arr,int n){
	int max=getmax(arr,n);
	for(int exp=1;max/exp>0;exp=exp*10)
	{
		countSort(arr,n,exp);
	}
	/*for(int i=0;i<n;i++)
	{
        	printf("%d\t",arr[i]);
        }*/
}
void countSort(int *arr,int n,int exp){
	int c[10],b[n];
	for(int i=0;i<10;i++){
		c[i]=0;
	}
	for(int i=0;i<n;i++){
		c[(arr[i]/exp)%10]=c[(arr[i]/exp)%10]+1;
		}
	for(int i=1;i<10;i++){
		c[i]=c[i]+c[i-1];
		}
	for(int i=0;i<n;i++){
		b[c[(arr[i]/exp)%10]-1]=arr[i];
		c[(arr[i]/exp)%10]--;
		}
	 for(int i=0;i<n;i++){
                  arr[i]=b[i];
                 }

	}







