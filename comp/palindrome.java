import java.io.*;
class palindrome{
public static void main(String arr[])throws IOException{
	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	String input=br.readLine();
	br.close();
	char ipArr[]=input.toCharArray();
	int left=0,right=0;
	if(ipArr.length%2==0){
		left=(ipArr.length)/2-1;
		right=ipArr.length/2;
	}else{
		left=(ipArr.length)/2-1;
		right=(ipArr.length/2)+1;

	}
	System.out.println("left="+left);
	System.out.println("right="+right);
	int count=0;
	while(left>=0&&right<ipArr.length){
		if(ipArr[left]==ipArr[right]){
			left--;
			right++;
		}else{
			count=count+Math.abs(ipArr[left]-ipArr[right]);
			left--;
			right++;
		}
	}
	System.out.println("count="+count);
}
}
