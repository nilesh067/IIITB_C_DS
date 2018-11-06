import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader;
import java.util.Collections;
import java.util.Arrays;
class Elimination{
	public static void main(String ar[])throws IOException{
//	Scanner sc=new Scanner(System.in);
	BufferedReader br = new BufferedReader(
                              new InputStreamReader(System.in));
	int t=Integer.parseInt(br.readLine());
//	int t = sc.nextInt();
	for (int j = 0; j < t; j++) {
		 /*int  n = sc.nextInt();
		 int  k = sc.nextInt();*/
		 String ip1[]=br.readLine().split("\\s");
		 int n=Integer.parseInt(ip1[0]);
		 int k=Integer.parseInt(ip1[1]);
		 Integer arr[]=new Integer[n];
		 String ip2[]=br.readLine().split("\\s");
		 int x=0;
	       	 for(String s:ip2){
		 arr[x]=Integer.parseInt(s);
		 x++;
		 }
		 Arrays.sort(arr,Collections.reverseOrder());
//		 System.out.println(Arrays.toString(arr));
		 int team=k;
		 for(int i=k;i<n;i++){
		 	if(arr[i]==arr[k-1])team++;
			else break;

		 }
		 System.out.println(team);
	}
}}
