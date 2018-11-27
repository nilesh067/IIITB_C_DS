import java.util.Arrays;
import static java.lang.Math.*;
class las{
	public static int getLas(int arr[],int n){
		int las[][]=new int[n][2];
		int l=0,maxindex=0;
		for(int i=0;i<n;i++){
			las[i][0]=1;
			las[i][1]=1;
		}
		int maxLas=0;
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				if(arr[j]<arr[i]){
					las[i][0]=max(las[i][0],las[j][1]+1);
				}else if(arr[j]>arr[i]){
					las[i][1]=max(las[i][1],las[j][0]+1);
				}				
			}
			maxLas=max(max(las[i][0],las[i][1]),maxLas);
			
		}
		//System.out.println("las Arrary :: "+Arrays.toString(las));
		/*int tmp=l;
		while(tmp>0){
			if(arr[maxindex]>arr[maxindex-1]){
				System.out.println(arr[maxindex]);
				tmp--;
			}
			maxindex--;
		}*/
		return maxLas;
	}
	public static void main(String arr[]){
		int iparr[] = { 10, 22, 9, 33, 49,  
                  50, 31, 60 }; 
            int n = iparr.length; 
            System.out.println("ip Arrary :: "+Arrays.toString(iparr));
	    System.out.println("Length of las is " + getLas(iparr,n)); 
	}
}
