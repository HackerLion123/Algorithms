#include"avltree.h"
cnode* Avltree::insert(cnode* t,int no,std::string na,float bal)
{
 if(t==NULL)
{
  t = new cnode[10];
  t->acc_no = no;
  t->customer_name= na;
  t->balance=bal;
  t->left = NULL;
  t->right = NULL;
  t->height = 0;
}
else if(no<t->acc_no)
{
 t->left=insert(t->left,no,na,bal);
 if(findheight(t->left)-findheight(t->right)==2)
 {
  if(no<t->left->acc_no)
   t=single_rotation_with_left_child(t);
  else
   t=double_rotation_with_left_child(t);
}
}
else if(no>t->acc_no)
{
 t->right=insert(t->right,no,na,bal);
 if(findheight(t->right)-findheight(t->left)==2)
 {
  if(no>t->right->acc_no)
   t = single_rotation_with_right_child(t);
  else
   t = double_rotation_with_right_child(t);
 }
}
 t->height = max(findheight(t->left),findheight(t->right))+1;
}

void Avltree::makeempty(cnode* t)
{
 if(t)
 {
  makeempty(t->right);
  makeempty(t->left);
  delete t;
 }
}

int Avltree::findheight(cnode* t)
{
  if(t!=NULL)
    return t->height;
  else
    return -1;
}

void Avltree::inorder(cnode* t)
{
  if(t!=NULL)
  {
    inorder(t->left);
    cout<<"Account Number:\t"<<t->acc_no << endl;
    cout<<"Customer Name:\t"<<t->customer_name<<endl;
    cout<<"Balance:"<<t->balance<<endl;
    inorder(t->right);
  }
}
void Avltree::preorder(cnode* t)
{
  if(t!=NULL)
  {
    cout<<"Account Number:\t"<<t->acc_no << endl;
    cout<<"Customer Name:\t"<<t->customer_name<<endl;
    cout<<"Balance:"<<t->balance<<endl;
    preorder(t->left);
    preorder(t->right);
  }
}

void Avltree::postorder(cnode* t)
{
  if(t!=NULL)
  {
    postorder(t->left);
    postorder(t->right);
    cout<<"Account Number:\t"<<t->acc_no << endl;
    cout<<"Customer Name:\t"<<t->customer_name<<endl;
    cout<<"Balance:"<<t->balance<<endl;
 }
}

cnode* Avltree::find(int accno,cnode* t)
{
  if(t==NULL)
    return NULL;
  if(accno<t->acc_no)
    return (find(accno,t->left));
  else if(accno>t->acc_no)
    return (find(accno,t->right));
  return t;
}
cnode* Avltree::findmin(cnode* t)
{
  while(t->left!=NULL)
    t=t->left;
  return t;
}

cnode* Avltree::single_rotation_with_left_child(cnode* k2){
  cnode* k1 = k2->left;
  k2->left = k1->right;
  k1->right = k2;
  k2->height = max(findheight(k2->left),findheight(k2->right))+1;
  k1->height = max(findheight(k1->left),k2->height)+1;
  return k1;
}
cnode* Avltree::double_rotation_with_left_child(cnode* k3)
{
  k3 = single_rotation_with_right_child(k3->left);
  k3 = single_rotation_with_left_child(k3);
  return k3;
}
cnode* Avltree::single_rotation_with_right_child(cnode* k2){
  cnode* k1 = k2->right;
  k2->right = k1->left;
  k1->left = k2;
  k2->height = max(findheight(k2->left),findheight(k2->right))+1;
  k1->height = max(findheight(k1->right),k2->height)+1;
  return k1;
}
cnode* Avltree::double_rotation_with_right_child(cnode* k3)
{
  k3 = single_rotation_with_left_child(k3->left);
  k3 = single_rotation_with_right_child(k3);
  return k3;
}
Avltree::Avltree()
{
  root = NULL;
}
