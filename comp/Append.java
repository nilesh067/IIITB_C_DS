class Append{
 static String appendAndDelete(String s, String t, int k) {
        int len1=s.length();
        int len2=t.length();
        if(len1>len2){
           int match=0;
            for(int i=0;i<len2;i++){
                if(s.charAt(i)==t.charAt(i))match++;
                else break;
            }
            int remaining=len2-match;
            int noOfOp=(len2-match)+(len1-match);
            if(noOfOp<=k)return "Yes";
            else return "No";
        }else{
            int match=0;
            for(int i=0;i<len1;i++){
                if(s.charAt(i)==t.charAt(i))match++;
                else break;
            }
            System.out.println("Len1="+len1+" Len2="+len2+" match="+match);
            int remaining=len1-match;
            int noOfOp=(len2-match)+(remaining);
            if(noOfOp<=k)return "Yes";
            else return "No";
        }
}
public static void main(String arr[]){
	String str1="y";
	String str2="yu";
	System.out.println(appendAndDelete(str1,str2,2));

}
}
