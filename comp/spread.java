import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader; 
class spread{
	public static void main(String ar[])throws IOException{
//	java.util.Scanner sc=new java.util.Scanner(System.in);
BufferedReader br = new BufferedReader(
                              new InputStreamReader(System.in));
	int t=Integer.parseInt(br.readLine());
	for(int i=0;i<t;i++){
		int l=Integer.parseInt(br.readLine());
		//String str=br.readLine();
		String strArr[]=br.readLine().split("\\s");
		int intArr[]=new int[l];
		int j=0;
		for(String s:strArr){
		intArr[j]=Integer.parseInt(s);
		j++;
		}
		int day=0;
		int know_index=1;
		while((l-know_index)>0){
			day++;
			int limit=know_index;
//			System.out.println("Day :: "+day +" invariant 0 to "+(limit-1));
			for(int k=0;k<limit;k++){
			know_index=know_index+intArr[k];
//			System.out.println("Know Index :: "+know_index +" k= "+k);
			if(know_index>=l)break;
			}
		}
		System.out.println(day);
	}
	}
}
