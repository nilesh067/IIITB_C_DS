#include<stdio.h>
#include <stdlib.h>
void quicksort(int *a,int i,int j);
int pivot(int *a,int i,int j);
int partation(int *a,int i,int j,int p);
int main(){
	//int arr[10]={1,20,34,55,7,23,33,16,90,5};
	int n,p=0,q;
	printf("Ennter The size of array \t");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=rand()%100;
	}
	q=n-1;
	printf("\nInput Array\n");
        for(int i=0;i<n;i++){
                printf("%d\t",arr[i]);
        }
	quicksort(arr,p,q);
	printf("\nSorted Array\n");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	return 0;

}
int pivot(int *a,int i,int j){
	return (i+rand()%(j-i+1));
}
void quicksort(int *a,int i,int j){
	if(j<=i+1){//less then 3 element's
		if(j-i==1){//only two element's
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	else{//more then two element's
		int p=pivot(a,i,j);
		printf("Pivote=%d,i=%d,j=%d\n",p,i,j);
         	for(int k=i;k<=j;k++){
                	printf("%d\t",a[k]);
	        }
        	printf("\n After Pivote Selecting ");
		int temp=a[i];
		a[i]=a[p];
		a[p]=temp;
		for(int k=i;k<=j;k++){
                          printf("%d\t",a[k]);
                 }
                  printf("\n After Partationing ");
		int k=partation(a,i+1,j,a[i]);
		for(int k=i;k<=j;k++){
                          printf("%d\t",a[k]);
                  }
                  printf("\n");
		temp=a[i];
		a[i]=a[k];
		a[k]=temp;
		quicksort(a,i,k);
		quicksort(a,k+1,j);
	}
}
		

int partation(int *a,int i,int j,int p){
	int l=i;
	int r=j;
	while(l<r){
		while(l<=r&&a[l]<=p){
			l++;
		}
		while(l<r&&a[r]>p){
			r--;
		}
		if(l<r){
			int temp=a[l];
			a[l]=a[r];
			a[r]=temp;
			l++;
			r--;
		}
	}
	/*printf("i=%d,j=%d,povit=%d,partioning index=%d\n",i,j,p,l-1);	
	for(int k=i;k<=j;k++){
	        printf("%d\t",a[k]);
        }
	printf("\n");*/
	return l-1;
}



