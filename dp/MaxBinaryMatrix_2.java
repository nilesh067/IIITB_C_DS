import java.util.Arrays;
class MaxBinaryMatrix_2{
	public static void main(String arrg[]){
	
	int R = 4; 
        int C = 4; 
        int arr[][] = { {0, 1, 1, 0}, 
                      {1, 1, 1, 1}, 
                      {1, 1, 1, 1}, 
                      {1, 1, 0, 0}, 
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
	Histogram h=new Histogram();
	int area=h.getSquareArea(A);
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
		int tempArea=h.getSquareArea(A);
		System.out.println("i="+i+" :: op :: "+Arrays.toString(A)+" :: area="+tempArea);
		if(tempArea>area)area=tempArea;
	}
	System.out.println("Area="+area);
	}
}
