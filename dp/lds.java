import java.util.Arrays;
import static java.lang.Math.*;
class lds{
	public static int getLis(int arr[],int n){
		int lis[]=new int[n];
		int l=0,maxindex=0;
		for(int i=0;i<n;i++){
			lis[i]=1;
		}
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				if(arr[j]>arr[i]){
					lis[i]=max(lis[i],lis[j]+1);
				}				
			}
		}
		l=lis[0];
		for(int i=1;i<n;i++){
			if(lis[i]>l){l=lis[i];maxindex=i;}
			//l=max(l,lis[i]);
		}
		System.out.println("lis Arrary :: "+Arrays.toString(lis));
		/*int tmp=l;
		while(tmp>0){
			if(arr[maxindex]>arr[maxindex-1]){
				System.out.println(arr[maxindex]);
				tmp--;
			}
			maxindex--;
		}*/
		return l;
	}
	public static void main(String arr[]){
//		int iparr[] = { 10, 22, 9, 33, 21, 50, 41, 60 }; 
		int iparr[] ={ 15, 27, 14, 38,63, 55, 46, 65, 85};
            int n = iparr.length; 
            System.out.println("ip Arrary :: "+Arrays.toString(iparr));
	    System.out.println("Length of lis is " + getLis(iparr,n)); 
	}
}
