import java.util.*;
import java.io.*;
class problem2{
	int v;
	LinkedList<Integer> adj[];
	public problem2(int v){
		this.v=v;
		adj=new LinkedList[v];
		for(int i=0;i<v;i++){
		adj[i]=new LinkedList<Integer>();
		}
	}
	public void addEdge(int u,int v){
		adj[u].add(v);
	}
	public void createGraph(int arr[],int n){
		for(int i=0;i<n;i++){
			addEdge(i,(i+arr[i])%n);
			if(i-arr[i]<0){
			int x=(i-arr[i]);
			 x = x*-1;
		            x = x%n;
		            x = x*-1;
			addEdge(i,(x+n)%n);
			}else{
			addEdge(i,(i-arr[i])%n);
			}
		}
	}
	public int doBFS(int s,int d){
		int path[]=new int[v];
		int visited[]=new int[v];
		Queue<Integer> q=new LinkedList<>();
		q.add(s);
		path[s]=0;
		visited[s]=1;
		if(s==d)return 0;
		while(!q.isEmpty()){
			s=q.poll();
			for(int a:adj[s]){
				/*if(a==d&&visited[a]==0){return path[s]+1;}
				else */if(visited[a]==0){
				path[a]=path[s]+1;
				visited[a]=1;
				q.add(a);
				if(a==d)return path[a];
				}
			}
			visited[s]=2;
		}
		return -1;
	}
	public static void main(String arr2[]) throws IOException{
		
		 Reader br = new Reader();
	        int t = br.nextInt();
	        for(int x=0;x<t;x++){
			int n=br.nextInt();
			int s=br.nextInt()-1;
			int d=br.nextInt()-1;
			int intarr2[]=new int[n];
			for(int i=0;i<n;i++){
				intarr2[i]=br.nextInt();
			}
			problem2 obj=new problem2(n);
			obj.createGraph(intarr2,n);
			System.out.println(obj.doBFS(s,d));
	        }
		/*int n=5;
		int arr[]=new int[]{2,1,2,3,4};
		problem2 obj=new problem2(5);
		obj.createGraph(arr,n);
		//System.out.println(Arrays.toString());
		
		for(int i=0;i<n;i++){
			for(int u:obj.adj[i]){
				System.out.println("Edge :: "+i+" To "+u);
			}
		}}
		int s=1;
		int d=4;
		System.out.println(obj.doBFS(s,d));*/
	}
	private  static class Reader
    {
        final private int BUFFER_SIZE = 1 << 16;
        private DataInputStream din;
        private byte[] buffer;
        private int bufferPointer, bytesRead;
 
        public Reader()
        {
            din = new DataInputStream(System.in);
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }
        public int nextInt() throws IOException
        {
            int ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do
            {
                ret = ret * 10 + c - '0';
            }  while ((c = read()) >= '0' && c <= '9');
 
            if (neg)
                return -ret;
            return ret;
        }
        private void fillBuffer() throws IOException
        {
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
            if (bytesRead == -1)
                buffer[0] = -1;
        }
        private byte read() throws IOException
        {
            if (bufferPointer == bytesRead)
                fillBuffer();
            return buffer[bufferPointer++];
        }
    }

}
