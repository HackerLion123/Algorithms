#include"heap.h"
BinHeap::BinHeap(int cap,int x)
{
        capacity=cap;
        hsize=0;
        heap=new node[capacity+1];
}
int BinHeap::enqueue(node i)
{
 int current;
 if(hsize==capacity)
   return -1;
 else
 {
  current=++hsize;
  for(;current>1&&i.accno<heap[current/2].accno;current/=2)
   heap[current]=heap[current/2];
 }
 heap[current]=i;
 return 1;
}
node BinHeap::front()
{
        return heap[hsize];
}
int BinHeap::isFull()
{
        return (hsize==capacity);
}
int BinHeap::isEmpty()
{
        return (hsize==0);
}
int BinHeap::dequeue()
{
        if(isEmpty())
                return -1;
        node lastE=heap[hsize];
				--hsize;
        int current=1;
        node j=heap[current];
        int child=2;
	 while(current<=hsize)
        {
                if(child<hsize && heap[child].accno>heap[child+1].accno)
                        child++;
                if(lastE.accno<=heap[child].accno)
                       break;
               heap[current]=heap[child];
               current=child;
                child*=2;
        }
        printData(j);
        heap[current]=lastE;
}

void BinHeap::printData(node node)
{
  cout<<"--------------Display----------------------\n";
  cout<<"Account number:\t";
  cout<<node.accno<<endl;
  cout<<"Customer Name:\t";
  cout<<node.customer_name<<endl;
  cout<<"Balance\t:";
  cout<<node.balance<<endl;
  cout<<"------------------End------------------------\n";
}

node BinHeap::getData()
{
  cout<<"******************Enter Details*********************"<<endl;
  node node;
  cout<<"Enter the id :\n";
  cin>>node.accno;
  cout<<"Enter the customer name:"<<endl;
  cin>>node.customer_name;
  cout<<"Enter the balance:\n";
  cin>>node.balance;
  return node;	
  cout<<"************************End**********************"<<endl;
}

void BinHeap::inOrder(int current)
{
 if(!isEmpty())
 {
	for(int i=1;i<current;i++)
  	printData(heap[i]);
 }
	else
			cout<<"Heap is Empty !\n";

}
node BinHeap::getRoot()
{
 return heap[1];
}
