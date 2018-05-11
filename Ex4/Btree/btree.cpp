#include"btree.h"
CTree::CTree()
{
root=NULL;
}

node* CTree::insert(int x,string com,node* t)
{
  if(root==NULL)
  {
    t=new node;
    t->Accno=x;
    t->cust_name=com;
    t->left=NULL;
    t->right=NULL;
    root++;
  }
  else if(x<t->Accno)
    t->left=insert(x,com,t->left);
  else if(x>t->Accno)
    t->right=insert(x,com,t->right);
  else
    return t;
  return t;
}
node* CTree::search(int x,node *root)
{
  if(t==NULL)
    return NULL;
  if(x<t->Accno)
    return (search(x,t->left));
  else if(x>t->Accno)
    return (search(x,t->right));
  return t;
}
node* CTree::findMin(node *t)
{
  while(t->left!=NULL)
    t=t->left;
  return t;
}
node* CTree::findMax(node *t)
{
  while(root->right!=NULL)
    root=root->right;
  return root;
}
node* CTree::deletion(int x,node* t)
{
  node *temp;
  temp=NULL;
  if(root==NULL)
    return NULL;
  else
  {
    if(x<root->Accno)
      root->left=deletion(x,root->left);
    else if(x>t->Accno)
      root->right=deletion(x,root->right);
    else
    {
      if(t->right!=NULL&&t->left!=NULL)
      {
        temp=findMin(t->right);
        t->Accno=temp->Accno;
        t->cust_name=temp->cust_name;
        t->right=deletion(t->Accno,t->right);
      }
      else
      {
        temp=t;
        if(t->left==NULL)
          t=t->right;
        else
          t=t->left;
        delete temp;
      }
    }
  }
  return t;
}
void CTree::inorder(node* cnode)
{
  if(cnode)
  {
    inorder(cnode->left);
    cout<<"Account number:\t"<<cnode->Accno<< endl;;
    cout<<"Customer name:\t"<<cnode->cust_name<<endl;
    inorder(cnode->right);
  }
}
void CTree::postorder(node *root)
{
  if(root)
  {
    postorder(root->left);
    postorder(root->right);
    cout<<"Account number:\t"<<root->Accno<< endl;;
    cout<<"Customer name:\t"<<root->cust_name<<endl;
 }
}
void CTree::preorder(node *cnode)
{
  if(cnode)
  {
    cout<<"Account number:\t"<<cnode->Accno<< endl;;
    cout<<"customer name:\t"<<cnode->cust_name<<endl;
    preorder(cnode->left);
    preorder(cnode->right);
  }
}

node* CTree::makeEmpty(node* t)
{
  if(t!=NULL)
  {
    makeEmpty(t->left);
    makeEmpty(t->right);
    delete t;
  }
}
