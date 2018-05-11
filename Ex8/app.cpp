#include"graph.h"
main()
{
 int v,e,j,opt;
 cout<<"------------Option------------"<<endl;
 cout<<"\t\t1]Graph\n\t\t2]Exit\n";
 cout<<"------------ End----------------"<<endl;
 cout<<"Enter your option";
 cin>>opt;
   int a,b;
   cout<<"Enter the number of vertices\t";
   cin>>v;
   cout<<"Enter the no of edges\t";
   cin>>e;
   Graph g(v,e);
   for(int i=0;i<v;i++)
   {
    g.getdata(i);
   }
   for(int i=0;i<e;i++)
   {
    cout<<"Enter vertex and corresponding edge:\t"<<endl;
    cin>>a; cin>>b;
    g.addedge(a,b);
   }
   g.displaymat();
   try{
    cout<<"Enter the vertex you want to traverse from\t";
    cin>>j;
    if(j<=v)
     g.dfs(j);
    else 
     throw 2;
    }
    catch(int)
    {
     cout<<"Enter a vertex in the graph"<<endl;
    }
}
void Graph::display(int i)
{
 cout<<"----------Details-----------"<<endl;
 cout<<"Account Number:\t"<<v[i].acc_no << endl;
 cout<<"Customer Name:\t"<<v[i].customer_name<<endl;
 cout<<"Balance:"<<v[i].balance<<endl;
 cout<<"---------End----------------"<<endl;
}
void Graph::getdata(int i)
{
  cout<<"--Enter the Details--"<<endl;
  cout<<"Account Number:\t";
  cin>>v[i].acc_no;
  cout<<"Customer Name:\t";
  cin>>v[i].customer_name;
  cout<<"Balance:\t";
  cin>>v[i].balance;
}

