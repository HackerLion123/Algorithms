#include<iostream.h>
class Cstack
{
 int *array;
 int size,top;
 public:
  Cstack(int s);
  bool push(int ele);
  bool pop();
  bool isempty();
  bool isfull();
  void display();
};


