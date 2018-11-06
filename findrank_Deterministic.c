#include<stdio.h>
#include<stdlib.h>
#include"findrank_Randomise.h"
/*Find rank deterministic method*/
int goodpivote(int *arr,int i,int j);
int d_partation(int *arr,int p,int r);
void d_findrank(int *arr,int i,int j,int r);
void sort(int *arr,int i,int j);
int main(void){	
	int sum,i,j,n,rank;
	printf("Enter the size of array\t");
	scanf("%d",&n);
	printf("Enter Rank\t");
	scanf("%d",&rank);
	j=n-1;
	int arr[n];
	for(int k=0;k<n;k++){
		arr[k]=rand()%100;
	}
	printf("Input Array is : \n");
	for(int k=0;k<n;k++){
                printf("%d\t",arr[k]);
        }
	//int num=goodpivote(arr,0,n-1);
	d_findrank(arr,0,j,rank);
	printf("\nfinal sorted  Array is : \n");
	sort(arr,0,j);
        for(int k=0;k<n;k++){
                printf("%d\t",arr[k]);
        }
	printf("\n");
	/*printf("Median Index  : %d And Value : %d",num,arr[num]);*/

}
void d_findrank(int * arr,int i,int j,int r){
	if(i<=j){
	int p=goodpivote(arr,i,j);
	int temp=arr[j];
	arr[j]=arr[p];
	arr[p]=temp;
	int k=d_partation(arr,i,j);
/*	printf("After Pattation index=%d\n",k);
           for(int x=i;x<=j;x++){
                  printf("%d\t",arr[x]);
           }*/
	if(r==(j-k+1))printf("\nElement is %d",arr[k]);
	else if(r<(j-k+1))d_findrank(arr,k,j,r);
	else d_findrank(arr,i,k-1,r-(j-k+1));
	}
}
int d_partation(int *arr,int p,int r){
	int x=arr[r];
	int i=p-1;
	for(int j=p;j<r;j++){
		if(arr[j]<=x){
			i++;
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	 int temp=arr[i+1];
         arr[i+1]=arr[r];
         arr[r]=temp;
/*	 printf("After Pattation index=%d\n",i+1);
	 for(int x=p;x<=r;x++){
	 	printf("%d\t",arr[x]);
	 }*/
	 return i+1;
}
int goodpivote(int *arr,int i,int j){
	int noOfGroup=0;
	int l=i;
	if((j-i+1)<5){
	int rnk=(j-i+1)/2;
	if(rnk==0)return i;
	else return findrank(arr,i,j,rnk);
	}
	for(int p=i;p<=j;p+=5){
		if(p+4<=j){
			sort(arr,p,p+4);
		}else{
			sort(arr,p,j);
		}
	}
/*	printf("\nSorted Array is : \n");
        for(int k=l;k<=j;k++){
                printf("%d\t",arr[k]);
        }
*/
	for(int p=i;p<=j;p+=5){
                if(p+4<=j){
                        int tmp=arr[i];
			arr[i]=arr[p+2];
			arr[p+2]=tmp;
			i++;
			noOfGroup++;
                }
        }
	
/*	printf("\nSorted Array is : \n");
        for(int k=l;k<=j;k++){
                printf("%d\t",arr[k]);
        }
	printf("\n Commpleate Sorted Array is : \n");
        for(int k=0;k<=19;k++){
	printf("%d\t",arr[k]);
	}*/	
//	printf("\n No of Group Compleat  is :: %d\n",noOfGroup);
	//int findrank(int *arr,int i,int j,int r); defined in included header file
	if(noOfGroup<=1)return l;
	int f_rank=(noOfGroup/2);
//	printf("l=%d,i=%d,rank  is :: %d\n",l,(l+noOfGroup-1),f_rank);
	 int pivote=findrank(arr,l,(l+noOfGroup-1),f_rank);
//	 printf("Pivote=%d\npivote Element=%d\n",pivote,arr[pivote]);
	 return pivote;
}
void sort(int *arr,int i,int j){
	for(int k=i;k<j;k++){
		for(int l=k+1;l<=j;l++){
			if(arr[k]>arr[l]){
				int tmp=arr[l];
				arr[l]=arr[k];
				arr[k]=tmp;
			}
		}
	}
}



