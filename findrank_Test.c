#include<stdio.h>
#include<stdlib.h>
#include"findrank_Randomise.h"
/*Find rank Randomise test method*/
int main(void){	
	int sum,i,j,n,r;
	printf("Enter the size of array\t");
	scanf("%d",&n);
	printf("Enter Rank\t");
	scanf("%d",&r);
	j=n-1;
	int arr[n];
	for(int k=0;k<n;k++){
		arr[k]=rand()%100;
	}
	printf("Input Array is : \n");
	for(int k=0;k<n;k++){
                printf("%d\t",arr[k]);
        }
	//int findrank(int *arr,int i,int j,int r);
	int num=findrank(arr,0,j,r);
	printf("\nRank %d Element Index Is : %d And Element Is : %d \n",r,num,arr[num]);
       printf("Enter Number\n");
       int number;
	scanf("%d",&number);
	int r_nk=rank(arr,0,j,number);
	printf("\nNumber  %d Rank Is : %d\n",number,r_nk);

}

