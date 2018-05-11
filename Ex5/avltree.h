#include<iostream>
using namespace std;
#include<string.h>
struct cnode
{
 int acc_no;
 int height;
 string customer_name;
 float balance;
 cnode* left;
 cnode* right;
};
class Avltree
{
 public:
  Avltree();
  void makeempty(cnode*);
  cnode* root;
  cnode* insert(cnode*,int,string,float);
  void delete_element(int,cnode*);
  void postorder(cnode*);
  void preorder(cnode*);
  void inorder(cnode*);
  cnode* single_rotation_with_right_child(cnode*);
  cnode* double_rotation_with_right_child(cnode*);
  cnode* single_rotation_with_left_child(cnode*);
  cnode* double_rotation_with_left_child(cnode*);
  int findheight(cnode*);
  cnode* find(int ,cnode*);
  cnode* findmin(cnode*);
};
