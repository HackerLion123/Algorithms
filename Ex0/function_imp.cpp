#include"function.h"
void cFunction::create_Array()
{
 data=new int[max_size];
 cout<<"Enter the size of the array"<<endl;
 cin>>size;
 cout<<"Enter the array elements"<<endl;
 for(int i=0;i<size;i++)
 {
  cin>>data[i];
 }
}

void cFunction::insert_End(int ele)
{
 if(size==max_size)
  cout<<"The array is full"<<endl;
 else
  data[size-1]=ele;
}

void cFunction::insert_Front(int ele)
{
 int temp;
 temp=data[0];
 data[0]=ele;
 for(int i=0;i<size-1;i++)
  {
   for(int j=1;j<size;j++)
   {
    data[i]=temp;
    temp=data[j];
    data[j]=data[i];
   }
  }
 size++;
}

void cFunction::insert_Postion(int ele,int pos)
{
 int temp;
 data[pos]=ele;
 for(int i=pos;i<size-1;i++)
  {
  for(int j=pos-1;j<size;j++)
   {
    data[i]=temp;
    temp=data[j];
    data[j]=data[i];
   }
  }
 size++;
}

void cFunction::delete_First()
{
 for(int i=0;i<size-1;i++)
  {
  for(int j=1;j<size;j++)
   {
    data[i]=data[j];
   }
  }
 size--;
}

void cFunction::delete_Last()
{
 data[size]=0;
 size--;
}

int cFunction::find_Element(int ele)
{
 for(int i=0;i<size;i++)
 {
  if(data[i]==ele)
  {
   if(data[i]==ele)
    {
     cout<<"The element is found in the "<<i<<"th position"<<endl;
     return(i);
    }
   else
    {
     cout<<"Element not found"<<endl;
     break;
    }
   } 
  }
}

int cFunction::find_Position(int pos)
{
 cout<<"The element is"<<data[pos];
 return(data[pos]);
}

void cFunction::traverse()
{
 for(int i=0;i<size;i++)
  cout<<data[i]<<endl;
}

void cFunction::makeempty()
{
 delete data;
}

void cFunction::delete_Element(int ele)
{
 int pos;
 pos=find_Element(ele);
 data[pos]=0;
 cout<<"Element is deleted"<<endl;
 size--; 
}                        
