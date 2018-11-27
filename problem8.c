#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Maximum sub sequence problem all no from i to j*/
void method1(int *arr,int n);
void method2(int *arr,int n);
void method3(int *arr,int n);//kadane's Algorithm
void method4(int *arr,int n);
int max(int a,int b);
int main(){
	int sum,l,r,n,max=0;
	/*printf("Enter the size of array\t");
	scanf("%d",&n);
	l=n-1;
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=rand()%100;
	}*/
	n=10;
	int arr[10]={1,20,-34,-55,-7,23,33,-16,90,-27};
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	method1(arr,n);
	method2(arr,n);
	method3(arr,n);
	//method4(arr,n);
	return 0;	
}
int max(int a,int b){
	if(a>b)return a;
	else return b;
	}
void method4(int *arr,int n){
	int cur_max=arr[0],max_t=arr[0];
	for(int i=1;i<n;i++){
		cur_max=max(cur_max,cur_max+arr[i]);
		max_t=max(max_t,cur_max);
	}
	printf("Max sum of subsequence is=%d\n",max_t);
	}


void method1(int *arr,int n){
	int max=0;
	for(int i=0;i<n;i++){
                 int sum=0;
                  for(int j=i;j<n;j++){
                          sum=sum+arr[j];
                  if(max<sum){
		//  printf("\nmax=%d",sum);
		  max=sum;
		  }
		  }
          }
          printf("Max sum of subsequence is=%d\n",max);
	  }
void method2(int *arr,int n){
	int max=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum=sum+arr[k];
				}
			if(sum>max)max=sum;
			}
			}
			printf("Max sum of subsequence is=%d",max);
			}
void method3(int *arr,int n){
	int max_end_hear=0,max_so_far=0;
	for(int i=0;i<n;i++){
		max_end_hear=max_end_hear+arr[i];
		if(max_end_hear<0){
			max_end_hear=0;
			}
		if(max_end_hear>max_so_far){
			max_so_far=max_end_hear;
			}
			}
			printf("Max sum of subsequence is=%d\n",max_so_far);
			}
