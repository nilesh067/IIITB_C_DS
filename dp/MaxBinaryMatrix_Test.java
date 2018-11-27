import java.util.*;
class MaxBinaryMatrix_Test{
	public static int getArea(int arr[]){
	//int arr[]={6, 2, 5, 4, 5, 1, 6};
	int n=arr.length;
	int minLArr[]=new int[n];
	int minRArr[]=new int[n];
	Stack<Integer> s=new Stack<>();
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
/*	System.out.println("Original Array");
	System.out.println(Arrays.toString(arr));
	System.out.println("First Min From Right");
	System.out.println(Arrays.toString(minRArr));
	System.out.println("First Min From Left");
	System.out.println(Arrays.toString(minLArr));*/
	int area=0,maxi=0;
	for(int k=0;k<n;k++){
	int lmin=minLArr[k];
	int rmin=minRArr[k];
	if(rmin==-1)rmin=n-1;
	else rmin=rmin-1;
	//if((l*(Math.abs(rmin-lmin)))>area){area=l*(Math.abs(rmin-lmin));maxi=k;};
	//if(rmin!=-1)rmin=rmin-1;
	if(lmin==-1)lmin=0;
	else lmin=lmin+1;
	if(arr[k]*(rmin-lmin+1)>area)area=arr[k]*(rmin-lmin+1);
	//System.out.println("Histogram :: "+arr[k]+" Area :: "+area);
	}
	return area;
}

	public static void main(String arrg[]){
	
	int R = 4; 
        int C = 5; 
        int arr[][] = { {1, 0, 1, 1, 0}, 
                      {0, 1, 1, 0, 1}, 
                      {1, 0, 1, 0, 1}, 
                      {0, 1, 0, 1, 1}, 
                    }; 
	int i=R-1;
	int A[]=new int[C];
	for(int j=0;j<C;j++){
		A[j]=arr[i][j];
		int k=i;
		while(arr[k][j]==1&&k>0){
			k=k-1;
			A[j]=A[j]+arr[k][j];
		}
	}
	System.out.println("op :: "+Arrays.toString(A));
	int area=getArea(A);
	System.out.println("Area :: > "+area);
	for(i=R-2;i>=0;i--){
		for(int j=0;j<C;j++){
			if(A[j]>0)A[j]=A[j]-1;
			else{
			int k=i;
			while(k>=0&&arr[k][j]==1){
			A[j]=A[j]+1;
			k=k-1;
			}
			}
		}
		int tempArea=getArea(A);
		System.out.println("i="+i+" :: op :: "+Arrays.toString(A)+" :: area="+tempArea);
		if(tempArea>area)area=tempArea;
	}
	System.out.println("Area="+area);
	}
}
