#include"array.h"
Cstack::Cstack(int s)
{
 size=s;
 top=-1;
 array=new int[size];
}
bool Cstack::isfull()
{
 if(top==size-1)
  return true;
 else
  return false;
}
bool Cstack::push(int ele)
{
 if(isfull())
  return false;
 else
 {
  array[++top]=ele;
  return true;
 }
}
bool Cstack::pop()
{
 if(isempty())
  return false;
 else
 {
  array[top]=0;
  return true;
 }
}
void Cstack::display()
{
 for(int i=0;i<=top;i++)
  cout<<array[i]<<'\n';
}
