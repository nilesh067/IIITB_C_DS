import java.util.*;
class problem6{
	public static void main(String a[]){
		int arr[]={1,0,0,1,1,0,1,1,0,0,1};
		int n=arr.length;
		System.out.println("size :: "+n);
		System.out.println("Input Array :: "+Arrays.toString(arr));
		for(int i=0;i<n;i++){
			if(arr[i]==0){		
				arr[i]=1;
			}else{
				arr[i]=-1;
			}
		}
		int maxSoFar=Integer.MIN_VALUE,maxEndHere=0;
		for(int i=0;i<n;i++){
			maxEndHere=maxEndHere+arr[i];
			if(maxEndHere>maxSoFar){
			maxSoFar=maxEndHere;
			}
			if(maxEndHere<0){
			maxEndHere=0;
			}
			System.out.println("Max Sum SubArray :: "+maxSoFar);
		}
	}
}
