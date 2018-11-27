import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.HashMap;
import java.util.Map;
class MT2018069_Nilesh{

	public static void main(String arr[]){
		BufferedReader reader;
		List<Integer> list=new ArrayList<>();
		Map<Integer,Integer> myMap=new HashMap<>();
		try {
			//reader = new BufferedReader(new FileReader("test_input"));	
			reader = new BufferedReader(new FileReader(arr[0]));
			String line="";
			while((line=reader.readLine())!=null){
				line=line.trim();
				if(line.length()>0) {
					list.add(Integer.parseInt(line));
					
				}
			}
			reader.close();
			System.out.println("File Reading Done. File Size "+list.size());
			int Intarr[]=new int[list.size()];
			int i=0;
			for(int data:list) {
				Intarr[i++]=data;
			}
			/*for(int data:Intarr) {
				System.out.println("Data :: "+data);
			}*/
			int blockcount=0;
			for(int k=2;k<=1000000;k=k*2) {
				blockcount=1;
				for(int j=0;j<Intarr.length;j++) {
					myMap.put(Intarr[j], Intarr[j]);
					if(myMap.size()<=k) {


					}else {
						blockcount++;
						myMap.clear();
						myMap.put(Intarr[j], Intarr[j]);
					}
				}
				System.out.println("For K="+k+" No of Blocks need's to Fit="+blockcount);

			}
		} catch (IOException e) {
			System.out.println("IO Exception Occured While Processing .. "+e);
		}catch(Exception e ) {
			System.out.println("Exception Occured While Processing .. "+e);
			
		}

	
	}
}

