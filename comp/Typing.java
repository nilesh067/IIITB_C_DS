import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader;
import java.util.Collections;
import java.util.Arrays;
import java.util.Map;
import java.util.HashMap;
class Typing{
	public static void main(String ar[])throws IOException{
	BufferedReader br = new BufferedReader(
                              new InputStreamReader(System.in));
	int t=Integer.parseInt(br.readLine());
	Map<Character,Integer> myMap=new HashMap<>();
//	Map<String,Double> myWord=new HashMap<>();
	myMap.put('d',0);
	myMap.put('f',0);
	myMap.put('j',1);
	myMap.put('k',1);
	for (int j = 0; j < t; j++) {
		Map<String,Double> myWord=new HashMap<>();
		 double sum=0;
		 int n=Integer.parseInt(br.readLine());		 
		 for(int i=0;i<n;i++){
		 	 String str=br.readLine();
			 if(myWord.get(str)!=null){
			 double d=myWord.get(str);
			  sum=sum+(d/2);
			 }else{
			 char ip1[]=str.toCharArray();
			 double time=0.2;
			 int prev=myMap.get(ip1[0]);
			 int curr=0;
			 for(int k=1;k<ip1.length;k++){
			 	curr=myMap.get(ip1[k]);
				if(curr==prev){
				time=time+0.4f;
				}else{
				time=time+0.2f;
				}
				prev=curr;
			 }
			 myWord.put(str,time);
			 sum=sum+time;
			 }
	}myWord.clear();
	//System.out.println((int)Math.ceil(sum*10));
	//System.out.println((int)sum*10);
	//System.out.println((int) Math.round(sum*10));
	double result=sum*10;
	System.out.println((int)result);
}}}
