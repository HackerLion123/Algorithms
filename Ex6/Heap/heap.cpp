#include"heap.h"
void Cheap::insert(int x)
{
 for(int hole=++size;hole>1&&x<arr[hole/2];hole=hole/2)
    arr[hole]=arr[hole/2];
 arr[hole]=x;
}

void Cheap::percolatedown(int hole)
{
 int child;
 int temp=arr[curr_size];
 for(;hole*2<currsize;hole=child)
 {
  child=2*hole;
  if(child!=currsize&&arr[child]>arr[child+1])
    child++;
  else 
   if(arr[child]<temp)
       arr[hole]=arr[child];
   else
     break;
 }
}

void cheap::
