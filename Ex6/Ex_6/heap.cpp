#include"heap.h"
BinHeap::BinHeap(int cap,int x)
{
        capacity=cap;
        hsize=0;
        heap=new Info[capacity+1];
}
int BinHeap::enqueue(Info i)
{
        int current;
        if(hsize==capacity)
                return -1;
        else
        {
                current=++hsize;
                for(;current>1 && i.id<heap[current/2].id;current/=2)
                        heap[current]=heap[current/2];
        }
        heap[current]=i;

        return 1;
}
Info BinHeap::front()
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
        Info lastE=heap[hsize];
				--hsize;
        int current=1;
        Info j=heap[current];
        int child=2;
	 while(current<=hsize)
        {
                if(child<hsize && heap[child].id>heap[child+1].id)
                        child++;
                if(lastE.id<=heap[child].id)
                        break;
                heap[current]=heap[child];
                current=child;
                child*=2;
        }
        printData(j);
        heap[current]=lastE;
}

void BinHeap::printData(Info info)
{
  cout<<"--------------Display----------------------\n";
  cout<<"Computers details:"<<endl;
  cout<<"\tID \t\t\t:\t";
  cout<<info.id<<endl;
  cout<<"\tBrand\t\t\t:\t";
  cout<<info.brand<<endl;
  cout<<"\tProcessor\t\t:\t";
  cout<<info.processor<<endl;
  cout<<"\tRAM\t\t\t:\t";
  cout<<info.ram<<"GB"<<endl;
  cout<<"\tPrice\t\t\t:\t";
  cout<<info.price<<"Rupees"<<endl;
  cout<<"------------------End------------------------\n";
}

Info BinHeap::getData()
{
  cout<<"******************Enter Details*********************"<<endl;
  Info info;
  cout<<"Enter the id :\n";
  cin>>info.id;
  cout<<"Enter the computer brand"<<endl;
  cin>>info.brand;
  cout<<"Enter the procesor:\n";
  cin>>info.processor;
  cout<<"Enter the computer RAM:\n";
  cin>>info.ram;
  cout<<"Enter the computer price:\n";
  cin>>info.price;
  return info;
  cout<<"************************End**********************"<<endl;
}

void BinHeap::inOrder(int current=1)
{
	if(isEmpty())
	printData(heap[current]);
	else
			cout<<"Heap is Empty !\n";

}
Info BinHeap::getRoot()
{
 return heap[1];
}
