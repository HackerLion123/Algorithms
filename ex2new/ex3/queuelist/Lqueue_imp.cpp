#include"Lqueue.h"
list::list(int s)
{
  head = new node();
  head->next = NULL;
  size = s;
  rear = -1;
  front = -1;
}
void list::enqueue(int id,int pr,string nam)
{
  node *temp;
  node *newnode;
  newnode = new node();
  newnode->cid = id;
  newnode->price = pr;
  newnode->name = nam;
  if(rear==size-1)
     rear = -1;
  temp = head;
  while(temp->next!=NULL)
     temp = temp->next;
  temp->next = newnode;
  newnode->next = NULL;
  ++rear;
}
void list::dequeue()
{
  if(front==size-1)
     front = -1;
  node *temp;
  temp = head->next;
  head->next = temp->next;
  temp->dis();
  delete temp;
  ++front;
  if(front==rear)
  {
    rear = -1;
    front = -1;
  }
}
void list::traverse()
{
  node *temp;
  temp = head->next;
  while(temp!=NULL)
  {
    temp->dis();
    temp =temp->next;
  }
}
void list::node::dis()
{
  cout << "id:\t" << cid << endl;
  cout << "balance:\t" << price << endl;
  cout << "Name:\t" << name << endl;
}
bool list::IsFull()
{
  if((rear==-1)&&(front==-1))
    return false;
  else if(((rear==size-1)&&(front==-1))||(front==rear))
    return true;
  else
    return false;
}
bool list::IsEmpty()
{
  if((rear==-1)&&(front==-1))
    return true;
  else
    return false;
}
