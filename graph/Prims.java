import java.util.*;
class Prims{
	private int v;
	private LinkedList<Integer[]> adj[];
	public Prims(int v){
	this.v=v;
	adj=new LinkedList[v];
	for(int i=0;i<v;i++){
		adj[i]=new LinkedList<Integer[]>();
	}
	}
	void addEdge(int u,int v,int w){
		Integer[] edge=new Integer[2];
		edge[0]=v;edge[1]=w;
		adj[u].add(edge);
	}
	void getPrims(int s){
	int path[]=new int[v];
	Arrays.fill(path,Integer.MAX_VALUE);
	int pie[]=new int[v];
	int col[]=new int[v];
	minHeap priority =new minHeap();
	PriorityQueue<vertex> pq=new PriorityQueue<>(priority);
	pq.add(new vertex(s,0));
	pie[s]=s;
	path[s]=0;
	col[s]=1;
	while(!pq.isEmpty()){
		vertex x=pq.poll();
		System.out.println("Pull :: "+x.id+" path wt :: "+x.path);
		col[x.id]=2;
		for(Integer[] arr:adj[x.id]){
			if(col[arr[0].intValue()]==0){
				path[arr[0].intValue()]=arr[1];
				col[arr[0].intValue()]=1;
				pie[arr[0].intValue()]=x.id;
				pq.add(new vertex(arr[0].intValue(),path[arr[0].intValue()]));
			}else if(col[arr[0].intValue()]==1){
				if(path[arr[0].intValue()]>(arr[1])){
					pq.remove(new vertex(arr[0].intValue(),path[arr[0].intValue()]));
					path[arr[0].intValue()]=arr[1];
					pie[arr[0].intValue()]=x.id;
					//decrease key remaning....
					pq.add(new vertex(arr[0].intValue(),path[arr[0].intValue()]));
				}
			}
		}
	}
	System.out.println("Path Arr :: "+Arrays.toString(path));
	System.out.println("Col Arr :: "+Arrays.toString(col));
}
public static void main(String arr[]){
	Prims d=new Prims(6);
	d.addEdge(0,2,6);
	d.addEdge(0,4,4);
	d.addEdge(1,2,7);
	d.addEdge(1,5,9);
	d.addEdge(2,1,7);
	d.addEdge(2,5,3);
	d.addEdge(2,3,2);
	d.addEdge(2,0,6);
	d.addEdge(3,2,2);
	d.addEdge(3,4,4);
	d.addEdge(4,0,4);
	d.addEdge(4,3,4);
	d.addEdge(5,1,9);
	d.addEdge(5,2,3);

	/*Prims d=new Prims(9);
	d.addEdge(0,1,4);
	d.addEdge(0,7,8);
	d.addEdge(1,2,8);
	d.addEdge(1,7,11);
	d.addEdge(1,0,4);
	d.addEdge(2,3,7);
	d.addEdge(2,5,4);
	d.addEdge(2,8,2);
	d.addEdge(2,1,8);
	d.addEdge(3,4,9);
	d.addEdge(3,2,7);
	d.addEdge(3,5,14);
	d.addEdge(4,3,9);
	d.addEdge(4,5,10);
	d.addEdge(5,4,10);
	d.addEdge(5,3,14);
	d.addEdge(5,2,4);
	d.addEdge(5,6,2);
	d.addEdge(6,5,2);
	d.addEdge(6,8,6);
	d.addEdge(6,7,1);
	d.addEdge(7,6,1);
	d.addEdge(7,8,7);
	d.addEdge(7,1,11);
	d.addEdge(7,0,8);
	d.addEdge(8,2,2);
	d.addEdge(8,7,7);
	d.addEdge(8,6,6);*/
	d.getPrims(0);
}
}
class minHeap implements Comparator<vertex>{
	public int compare(vertex a,vertex b){
		if(a.path>b.path)return 1;
		else if(a.path<b.path)return -1;
		else return 0;
	}
}
class vertex{
int id;
int path;
	public vertex(){}
	public vertex(int id,int path){this.id=id;this.path=path;}
}
