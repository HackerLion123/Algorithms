#include"CStack.h"
CStack::CStack(int max)
{
 s=new int[max];
 top=-1;
 size=max;
}
bool CStack::Push(int element)
{
 if(isFull())
 {
  return false;
 }
 else
 {
  s[++top]=element;
  Display();
  return true;
 }
}
int CStack::Pop()
{
 	if(isEmpty())
	{
        return -1;
	}
	else
	{
        return s[top--];
	}
}
bool CStack::isFull()
{
	if(top<size-1)
	{
        return false;
	}
	else
	{
        return true;
	}
}
bool CStack::isEmpty()
{
	if(top>=0)
	{
        return false;
	}
	else
	{
        return true;
	}
}
void CStack::Display()
{
	if(isEmpty())
	{
	 cout<<"Stack is EMPTY"<<endl;
	}
	else
	{
	 cout<<"size of the stack is "<<size<<endl;
	 cout<<"Top is "<<top<<" now"<<endl;
	 for(int i=0;i<=top;i++)
	 {
	  cout<<"\t"<<s[i];
	 }
	 cout<<endl;
    }
}

