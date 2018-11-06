import java.io.IOException; 
import java.util.Collections;
import java.util.Arrays;
import java.util.Map;
import java.util.HashMap;
import java.util.Scanner;
class Card{
	public static void main(String ar[])throws IOException{
	Scanner sc=new Scanner(System.in);
	int t=sc.nextInt();
	//Map<String,Integer> myMap=new HashMap<>();
	for (int j = 0; j < t; j++) {
		//Map<String,Integer> myMap=new HashMap<>();
		int n=sc.nextInt();
		int intArr[]=new int[n];
		int x=0;
		for(x=0;x<n;x++){
		intArr[x]=sc.nextInt();
		}
			if(isSorted(intArr,0,n-1)){
			System.out.println("YES");
			}else{	boolean flag=false;
				for(int y=1;y<n;y++){				
				String Str1=Arrays.toString(intArr);
				int temp[]=copyFullArrayUsingSystem(intArr);
				if(isSorted(temp,0,y-1)&&temp[0]>=temp[n-1])
				{	
					if(!(isSorted(temp,y,n-1)))continue;
					shift(temp,n,y);
					System.out.println("Shift  "+y+" Place "+Arrays.toString(temp));
					if(isSorted(temp,0,n-1)){
					flag=true;break;
					}}else break;
					}
					if(flag){
					System.out.println("YES");
					}else System.out.println("NO");
			}
		
	}
}
public static void  rotate(int arr[],int i,int j){
	while(i<j){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
}
public static void shift(int arr[],int n,int d){
	rotate(arr,0,d-1);
	rotate(arr,d,n-1);
	rotate(arr,0,n-1);
}
public static boolean isSorted(int arr[],int i,int j){
	for(int x=i;x<j;x++){
	if(arr[x]>arr[x+1])return false;
	}
	return true;
}
 private static int[] copyFullArrayUsingSystem(int[] source) {
        int[] temp=new int[source.length];
        System.arraycopy(source, 0, temp, 0, source.length);
        return temp;
    }
}

