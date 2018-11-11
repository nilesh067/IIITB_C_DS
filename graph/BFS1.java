import java.util.*;
class BFS1{
	private int v;
	private LinkedList<Integer>[] adjList;
	BFS1(int v){
	this.v=v;
	adjList=new LinkedList[v];
	for(int i=0;i<v;i++){
		adjList[i]=new LinkedList<Integer>();
	}}
	public void addEdge(int i,int j){
	adjList[i].add(j);
	}
	void BFS(int s){
		int visited[]=new int[v];
		int pie[]=new int[v];
		Queue<Integer> queue=new LinkedList<>();
		queue.add(s);
		visited[s]=1;
		pie[s]=s;
		while(queue.size()!=0){
			s=queue.poll();
			System.out.println(s);
			for(int a:adjList[s]){
				if(visited[a]==0){
					visited[a]=1;
					pie[a]=s;
					queue.add(a);
				}
			}
			visited[s]=2;
		}
		System.out.println("Visited Arr :: "+Arrays.toString(visited));
		System.out.println("Pie Arr :: "+Arrays.toString(pie));
	}
public static void main(String arr[]){
	BFS1 g=new BFS1(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	g.BFS(2);

}

}
