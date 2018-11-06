import java.util.Arrays;
import java.util.Stack;
class problem12{
/*program for finding first minimum no on right side*/
	public static void main(String aee[]) throws Exception{
	//int arr[]={4,3,8,10,9,7,12,11};
	//int arr[]={6, 2, 5, 4, 5, 1, 6};
	int arr[]={3, 4, 0, 0};
	int n=arr.length;
	int minLArr[]=new int[n];
	int minRArr[]=new int[n];
	Stack<Integer> s=new Stack<>();
	/*for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){minRArr[i]=j;break;}
		}
	}
	//minLArr[0]=0;
	for(int i=n-1;i>0;i--){
		for(int j=i-1;j>=0;j--){
			if(arr[j]<arr[i]){minLArr[i]=j;break;}
		}
		
	}*/
	s.push(0);
	int i=0;
	for(int j=1;j<n;j++){
		i=s.peek();
		if(arr[j]>=arr[i])s.push(j);
		while(arr[j]<arr[i]&&(!s.empty())){minRArr[i]=j;s.pop();
		if(s.empty())break;
		i=s.peek();}
		s.push(j);
	}
	i=s.peek();
	while(!s.empty()){
	minRArr[i]=-1;
	s.pop();
	if(s.empty())break;
	i=s.peek();
	}
	s.clear();
	s.push(n-1);
	for(int j=n-2;j>=0;j--){
		i=s.peek();
		if(arr[j]>=arr[i])s.push(j);
		while((!s.empty())&&arr[j]<arr[i]){minLArr[i]=j;s.pop();
		if(s.empty())break;
		i=s.peek();}
		s.push(j);
		}
	i=s.peek();
	while((!s.empty())){
		minLArr[i]=-1;
		s.pop();
		if(s.empty())break;
		i=s.peek();
	}
	System.out.println("Original Array");
	System.out.println(Arrays.toString(arr));
	System.out.println("First Min From Right");
	System.out.println(Arrays.toString(minRArr));
	System.out.println("First Min From Left");
	System.out.println(Arrays.toString(minLArr));
	int area=0,maxi=0;
	for(int k=0;k<n;k++){
	int lmin=minLArr[k];
	int rmin=minRArr[k];
	if(rmin==-1)rmin=k;
	else rmin=rmin-1;
	//if((l*(Math.abs(rmin-lmin)))>area){area=l*(Math.abs(rmin-lmin));maxi=k;};
	//if(rmin!=-1)rmin=rmin-1;
	if(lmin==-1)lmin=k;
	else lmin=lmin+1;
	if(arr[k]*(rmin-lmin+1)>area)area=arr[k]*(rmin-lmin+1);
	//System.out.println("Histogram :: "+arr[k]+" Area :: "+area);
	}
	System.out.println("Area :: "+area);
}
}
