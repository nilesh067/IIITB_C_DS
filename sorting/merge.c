#include<stdio.h>
void merge1(int *a,int p,int q,int r);
void merge_sort(int *a,int p,int r);
void merge2(int *arr,int p,int q,int r);
int main(){
	int arr[10]={1,20,34,55,7,23,33,16,90,5};
	int i=0,j=9;
	merge_sort(arr,i,j);
	for(i=0;i<=j;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
void merge_sort(int *a,int p,int r){
	int q;
	printf("Merge Sort p=%d\tr=%d\n",p,r);
	if(p<r){
		q=(p+r)/2;
		merge_sort(a,p,q);
		merge_sort(a,q+1,r);
		merge2(a,p,q,r);
	}
}
void merge1(int *a,int p,int q,int r){
	int n1=q-p+1;
	int n2=r-q;
	int L[n1+1],R[n2+1];
	for(int i=0;i<n1;i++){
		L[i]=a[p+i];
	}
	for(int i=0;i<n2;i++){
                R[i]=a[q+i+1];
        }
	L[n1]=2147483647;
	R[n2]=2147483647;
	int i=0,j=0;
	for(int k=p;k<=r;k++){
		if(L[i]<R[j]){
			a[k]=L[i++];
		}
		else{
			a[k]=R[j++];
		}
	}
}

void merge2(int *a,int p,int q,int r){
	int L=p,R=q+1,i=0,arr[r-p+1];
	while(L<=q&&R<=r){
		if(a[L]<=a[R])arr[i++]=a[L++];
		else arr[i++]=a[R++];
	}
	while(L<=q)arr[i++]=a[L++];
	while(R<=r)arr[i++]=a[R++];
	L=p;i=0;
	while(L<=r)a[L++]=arr[i++];
}
	


