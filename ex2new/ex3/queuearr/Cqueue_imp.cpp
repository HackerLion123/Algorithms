#include"Cqueue.h"
CQueue::CQueue(int s)
{
  size = s;
  rear = -1;
  front = -1;
  Array = new int[size];
}
void CQueue::enqueue(int ele)
{
	/*if(front==-1)
	{
		front=0;
		rear=0;
	}*/
  if(rear==size-1)
    rear = -1;
	//else
		//rear++;
  Array[++rear] = ele;
}
int CQueue::dequeue()
{
  int data;
  if(front==size-1)
     front = -1;
  data = Array[++front];
  if(front==rear)
  {
    rear = -1;
    front = -1;
  }
  return data;
}

void CQueue::traverse()
{
  if(front<rear)
    for(int i=front;i<rear;)
       cout << "\t" << Array[++i];
  else
  {
    for(int i=front;i<size-1;)
       cout << "\t" << Array[++i];
    for(int i=-1;i<rear;)
       cout << "\t" << Array[++i];
  }
  cout << endl;
}
bool CQueue::IsFull()
{
  if((rear==-1)&&(front==-1))
    return false;
  else if(((rear==size-1)&&(front==-1))||(front==rear))
    return true;
  else
    return false;
}
bool CQueue::IsEmpty()
{
  if((rear==-1)&&(front==-1))
    return true;
  else
    return false;
}
