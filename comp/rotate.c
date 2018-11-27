#include<stdio.h>
void reverse(int *arr,int i,int n);	
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    	printf("%d\t",arr[i]);
}
void leftRotate(int *arr,int d,int n){
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);

}
/* Driver program to test above functions */
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    // Function calling
    printf("Input Array :: \n");
    printArray(arr, n);
    printf("\nArray shifted by 2 :: \n");
    leftRotate(arr, d, n);
    printArray(arr, n);
}
void reverse(int *arr,int i,int n){
	while(i<n){
	int temp=arr[i];
	arr[i]=arr[n];
	arr[n]=temp;
	i++;
	n--;
	}
}
