import java.util.*;
class DFS{
	int v;
	LinkedList<Integer> adj[];
	DFS(int vertex){
		this.v=vertex;
		adj=new LinkedList[vertex];
		for(int i=0;i<vertex;i++){
			adj[i]=new LinkedList<Integer>();
		}
	}
	void addEdge(int i,int j){
		adj[i].add(j);
	}
	void getDFS(int s){
		int visited[]=new int[v];
		int pie[]=new int [v];
		Stack<Integer> stack=new Stack<Integer>();
		stack.push(s);
		visited[s]=1;
		pie[s]=s;
		while(!stack.empty()){
			s=stack.pop();
			System.out.println(s);
			visited[s]=2;
			for(int a:adj[s]){
				if(visited[a]!=2){
					stack.push(a);
					visited[a]=1;
					pie[a]=s;
				}
			}
		}
		System.out.println("Visited Arr :: "+Arrays.toString(visited));
		System.out.println("Pie Arr :: "+Arrays.toString(pie));
	
	}
	public static void main(String arr[]){
		DFS dfs=new DFS(4);
		dfs.addEdge(0,1);
		dfs.addEdge(0,2);
		dfs.addEdge(1,2);
		dfs.addEdge(2,0);
		dfs.addEdge(2,3);
		dfs.addEdge(3,3);
		dfs.getDFS(2);
	}
}
