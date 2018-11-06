#include<stdio.h>
#include<stdlib.h>
/*Max Sum Of Two Numbers*/
void merge_sort(int *a,int p,int r);
void merge(int *arr,int p,int q,int r);
int main(){
	int arr[10],sum,l,r;
	for(int i=0;i<10;i++){
		arr[i]=rand()%100;
	}
	for(int i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	merge_sort(arr,0,9);
	printf("\nSorted Array\n");
	for(int i=0;i<10;i++){
                printf("%d\t",arr[i]);
        }
	printf("\nEnter the Sum of Two Number :: ");
	scanf("%d",&sum);
	l=0;
	r=9;
	while(l<=r){
		if(arr[l]+arr[r]==sum){
			printf("Found at index %d,%d",l,r);
			return 0;
		}else if(arr[l]+arr[r]>sum)r--;
		else l++;
	}
	printf("Sum Not Found");
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

