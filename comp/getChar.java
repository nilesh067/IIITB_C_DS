import java.util.Arrays;
class GetChar{
public static void main(String ar[]){
String s="My Name Is nilesh";
char arr[]=new char[s.length()];
s.getChars(0,s.length(),arr,0);
char arr2[]=s.toCharArray();
System.out.println("String :: "+s);
System.out.println("Char :: "+Arrays.toString(arr));
System.out.println("Char :: "+Arrays.toString(arr2));
System.out.println("Size a :: "+arr.length);
System.out.println("Size b :: "+arr2.length);
}
}
