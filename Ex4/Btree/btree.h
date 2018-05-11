#include<iostream>
using namespace std;
struct node
{
  int Accno;
  string  cust_name;
  node *left;
  node *right;
};
class CTree
{
  private:
    node *root;
  public:
    CTree(); 
    node* insert (int,string,node*);
    node* search (int,node*);
    node* findMin(node*);
    node* findMax(node*);
    node* deletion(int,node*);
    void inorder (node*);
    void postorder (node*);
    void preorder (node*);
    node* getRoot();
    node* makeEmpty(node*);
    void setRoot(node*);
};
