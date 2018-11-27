import java.io.*;
class BeautifulString{
public static void main(String arr[])throws IOException {
	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	String input=br.readLine();
	br.close();
	char ipArr[]=input.toCharArray();
	for(char c:ipArr){
	System.out.println(c);
	}
	int count=0;
	for(int i=2;i<ipArr.length;i++){
		String s=ipArr[i-2]+""+ipArr[i-1]+""+ipArr[i];
		if(s.equalsIgnoreCase("010")){
		ipArr[i]='1';
		count++;
		}
	}
	System.out.println(count);
}
}
