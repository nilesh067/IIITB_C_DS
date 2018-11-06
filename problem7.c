#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void merge_sort(int *a,int p,int r);
void merge(int *arr,int p,int q,int r);
/*Sell after buy to earn max profit but stock remains for only l days*/
int main(){
	int sum,l,r,n;
	/*printf("Enter the size of array\t");
	scanf("%d",&n);
	l=n-1;
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=rand()%100;
	}*/
	printf("Enter the value of l\t");
	scanf("%d",&l);
	n=10;
	int arr[10]={1,20,34,55,7,23,33,16,90,27};
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	sum=0;int i=0;
	for(int j=l;j<n-1;j++){
		if(abs(arr[j]-arr[i])>sum)sum=abs(arr[j]-arr[i]);
		if(arr[j-l+1]<arr[i])i=j-l+1;
	}
	printf("Max of A[J]-A[I]=%d where j>=l+i",sum);
	return 0;	
}
void merge_sort(int *a,int p,int r){
        int q;
//        printf("Merge Sort p=%d\tr=%d\n",p,r);
        if(p<r){
                q=(p+r)/2;
                merge_sort(a,p,q);
                merge_sort(a,q+1,r);
                merge(a,p,q,r);
        }
}
void merge(int *a,int p,int q,int r){
	int arr[r-p+1],L=p,R=q+1,i=0;
	while(L<=q&&R<=r){
                if(a[L]<=a[R])arr[i++]=a[L++];
                else arr[i++]=a[R++];
        }
        while(L<=q)arr[i++]=a[L++];
        while(R<=r)arr[i++]=a[R++];
        L=p;i=0;
        while(L<=r)a[L++]=arr[i++];
}


