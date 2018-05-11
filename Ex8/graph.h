#include<iostream>
#include<string.h>
using namespace std;
typedef struct vertex
{
 string customer_name;
 int acc_no;
 float balance;
}vertex;

class Graph
{
 private:
  vertex *v;
  bool *visited;
  int vertexno;
  int edgeno;
  int **adjMatrix;
 public:
	~Graph();
  Graph(int,int);
  void getdata(int);
  void display(int);
  void addedge(int,int);
  void displaymat();
  void dfs(int);
}; 
