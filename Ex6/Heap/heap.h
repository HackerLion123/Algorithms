#include<iostream>
using namespace std;
class Cheap
{
 public:
  int size,maxsize,*arr;
  void insert(int d);
  int deletemin();
  void traverse();
  void bulidheap(int *);
 private:
  void percolatedown(int);
  void increasekey(int,int);
  void decreasekey(int,int);
};
