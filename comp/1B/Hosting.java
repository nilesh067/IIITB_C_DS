import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Map;
import java.util.HashMap;
class Hosting{
	public static void main(String arrg[])throws Exception{
	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	int t=Integer.parseInt(br.readLine());
	Map<Integer,String> myMap=new HashMap<>();
	myMap.put(new Integer(2010),"HOSTED");
	myMap.put(new Integer(2015),"HOSTED");
	myMap.put(new Integer(2016),"HOSTED");
	myMap.put(new Integer(2017),"HOSTED");
	myMap.put(new Integer(2019),"HOSTED");
	myMap.put(new Integer(2011),"NOT HOSTED");
	myMap.put(new Integer(2012),"NOT HOSTED");
	myMap.put(new Integer(2013),"NOT HOSTED");
	myMap.put(new Integer(2014),"NOT HOSTED");
	myMap.put(new Integer(2018),"NOT HOSTED");
	for(int i=0;i<t;i++){
		int year=Integer.parseInt(br.readLine());
		System.out.println(myMap.get(year));
	}
	br.close();
	}

}
