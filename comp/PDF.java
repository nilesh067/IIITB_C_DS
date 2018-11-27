import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader; 
import java.util.Arrays;
class PDF{
	public static void main(String arr[])throws IOException{
	BufferedReader br = new BufferedReader(
                              new InputStreamReader(System.in));
	char charArr[]=br.readLine().toCharArray();
	System.out.println(Arrays.toString(charArr));
	String word=br.readLine();
	System.out.println(word);
	br.close();
	}

}
