import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Scanner;

public class Sequence {

	public static void main(String[] args) throws NumberFormatException, IOException {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		for(int i=0;i<t;i++) {
		String arr[]=br.readLine().split(" ");	
		int n=Integer.parseInt(arr[0]);
		int k=Integer.parseInt(arr[1]);
		int ipArr[]=new int[n];
		int ipArr2[]=new int[n];
		int once=0,sumsq=0;
		for(int j=0;j<n;j++) {
			ipArr[j]=sc.nextInt();
			//sum=sum+ipArr[j];
			//ipArr2[j]=ipArr[j]*ipArr[j];
			//sumsq=sumsq+ipArr2[j];
			if(ipArr[j]>1)once++;
		}
		if(once<=k)System.out.println("YES");
		else System.out.println("NO");
		}
		br.close();
	}

}

