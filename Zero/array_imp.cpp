#include"array.h"
CListArray::CListArray()
{
  size = 0;
  maxsize = 0;
}
CListArray::CListArray(int max)
{
  maxsize = max;
  size=0;
}
int CListArray::createArray(int max)
{
  if(size==0)
  {
    maxsize=max;
    data = new int[maxsize];
  }
  else
    return -1;//cout << "Array Was Already Created" << endl;
}
int CListArray::insertAtFront(int element)
{
  if(size<maxsize)
  {
    int i;
    size++;
    for(i=size-1;i>0;i--)
       data[i] = data[i-1];
    data[i] = element;
  }
  else
    return -1;//cout << "Array Is Full" << endl;
}
int CListArray::insertAtEnd(int element)
{
  if(size<maxsize)
  {
    data[size] = element;
    size++;
  }
  else
    return -1;//cout << "Array Is Full" << endl;
}
int CListArray::insertAtPosition(int element,int position)
{
  if(size<maxsize)
  {
    if(position<=size)
    {
      int i;
      size++;
      for(i=size-1;i>position-1;i--)
         data[i] = data[i-1];
      data[i] = element;
    }
    else
      return -2;
  }
  else
    return -1;//cout << "Array Is Full" << endl;
}
int CListArray:: deleteAtFirst()
{
  if(size>0)
  {
    for(int i=0;i<size;i++)
             data[i] = data[i+1];
    size--;
  }
  else
     return -1;//cout << "Array Is Empty" << endl;
}
int CListArray::deleteAtLast()
{
  if(size>0)
  {
    size--;
  }
  else
     return -1;//cout << "Array Is Empty" << endl;
}
int CListArray:: deleteAnElement(int element)
{
  int count = 0;
  if(size>0)
  {
    for(int i=0;i<size;i++)
    {
      if(data[i]==element)
      {
        count++;
        for(int j=i;j<size-1;j++)
           data[j] = data[j+1];
        size--;
      }
    }
    if(count==0)
                   return -2;//cout << "Given Element Is Not An Eleme
//" << endl;
  }
  else
     return -1;//cout << "Array Is Empty" << endl;
}
int CListArray::findByPosition(int position)
{
  if(position<=size)
  {
    for(int i=0;i<size;i++)
       if(i==position-1)
          return data[i];
  }
  else
    return -1;
}
int CListArray::findByElement(int element)
{
  for(int i=0;i<size;i++)
     if(data[i]==element)
         return i+1;
  return -1;
}
void CListArray::travessel()
{
  for(int i=0;i<size;i++)
     cout << "\t" << data[i];
  cout << endl;
}
int CListArray::makeEmpty()
{
  if(size>0)
  {
    delete [] data;
  }
  else
      return -1;//cout << "Array Was Not Created" << endl;
}
