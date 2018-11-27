class transitiveClosure{
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
					closure[i][j]=((closure[i][j]==1)||((closure[i][k]==1) && (closure[k][j])==1)?1:0);
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
		int V=4;
		int graph[][] =new int[][]{{1, 1, 0, 1}, 
                        {0, 1, 1, 0}, 
                        {0, 0, 1, 1}, 
                        {0, 0, 0, 1} 
                      }; 
		transitiveClosure tc=new transitiveClosure();
		tc.findClosure(V,graph);
	}


}
