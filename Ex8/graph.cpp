#include"graph.h"
void Graph::dfs(int v)
{
 display(v);
 visited[v]=true;
 for(int i=0;i<vertexno;i++)
 {
  if(adjMatrix[v][i]==1)
  {
   if(!visited[i]) 
    dfs(i);
  }
 }
}

Graph::Graph(int vex,int edg){
  edgeno=edg;
  vertexno=vex;
  visited=new bool[vex];
  v=new vertex[vex];
 for(int i=0;i<vex;i++)
   visited[i]=false;
	cout<<"Hey\n";
	adjMatrix=new int*[++vex];
	for(int i=0;i<vex;i++)
   adjMatrix[i]=new int[vex];
 for(int i=0;i<vex;i++)
  for(int j=0;j<vex;j++)
   adjMatrix[i][j]=0;
}

Graph::~Graph()
{
 delete [] v;
 delete [] visited;
 delete [] adjMatrix;
}

void Graph::displaymat()
{
 for(int i=0;i<vertexno;i++)
 {
  for(int j=0;j<vertexno;j++)
   cout<<adjMatrix[i][j]<<"\t";
  cout<<endl;
 }
}
void Graph::addedge(int v,int w)
{
 adjMatrix[v][w]=1;
 adjMatrix[w][v]=1;
}
  
