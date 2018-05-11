#include<iostream>
using namespace std;
class CQueue
{
   int *Array;
   int size;
   int rear;
   int front;
  public:
   CQueue(int s);
   void enqueue(int ele);
   int dequeue();
   void traverse();
   bool IsFull();
   bool IsEmpty();
   bool check();
};
