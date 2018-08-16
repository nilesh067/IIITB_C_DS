#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5},arr_count=5;
	int minSum=0,max=arr[0],min=arr[0],maxSum=0;
/*    for(int i=0;i<arr_count-1;i++){
	for(int j=i+1;j<arr_count;j++)
		if(arr[i]<arr[j]){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		}
    }
  */
       for(int i=0;i<arr_count-1;i++){
     
                if(arr[0]<arr[i+1]){
                int temp=arr[0];
                arr[0]=arr[i+1];
                arr[i+1]=temp;
            
    }
       }
           for(int i=arr_count-1;i>0;i--){
     
                if(arr[arr_count-1]>arr[i-1]){
                int temp=arr[arr_count-1];
                arr[arr_count-1]=arr[i-1];
                arr[i-1]=temp;
            
    }	
	   }
    for(int i=0;i<arr_count;i++){
    	printf("%d\t",arr[i]);
    }
   
    return 0;
}
