#include<iostream>
using namespace std;
class list 
{
    class node

  {
    public:
      int cid,price;
      string name;
      node *next;
      void dis();
  };
  node *head;
  int size;
  int rear;
  int front;
 public:
   list(int s);
   void enqueue(int id,int price,string nam);
   void dequeue();
   void traverse();
   bool IsFull();
   bool IsEmpty();
};
