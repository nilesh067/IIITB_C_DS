class floydWarshall{
	public void findClosure(int V,int graph[][]){
		int closure[][]=new int[V][V];
		for(int i=0;i<V;i++){
			for(int j=0;j<V;j++){
			closure[i][j]=graph[i][j];
			}		
		}
		for(int k=0;k<V;k++){
			for(int i=0;i<V;i++){
				for(int j=0;j<V;j++){
					if(closure[i][k]+closure[k][j]<closure[i][j])
					closure[i][j]=(closure[i][k])+(closure[k][j]);
					}
				}
			}
		for(int i=0;i<V;i++){
			for(int j=0;j<V;j++){
				System.out.print(closure[i][j]+"\t");
				}
			System.out.println("");
			}
	}
	public static void main(String arr[]){
		int V=4,n=99999;
		int graph[][] =new int[][]{{0, 5, n, 10}, 
                        {n, 0, 3, n}, 
                        {n, n, 0, 1}, 
                        {n, n, n, 0} 
                      }; 
		floydWarshall tc=new floydWarshall();
		tc.findClosure(V,graph);
	}


}
