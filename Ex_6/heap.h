#include<iostream>
using namespace std;
struct node
{
        int accno;
        string customer_name;
        float balance;
};
class BinHeap
{
       private:
         node *heap;
         int capacity;
         int hsize;
       public:
         void printData(node a);
         node getData();
         int enqueue(node i);
         int dequeue();
         node front();
         int rear();
         BinHeap(){}
         BinHeap(int,int);
         ~BinHeap(){delete[] heap;}
         int isFull();
         int isEmpty();
         void inOrder(int current);
         node getRoot();

};
