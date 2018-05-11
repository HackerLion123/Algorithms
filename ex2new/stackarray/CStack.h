#include<stdlib.h>
#include<iostream>
using namespace std;
class CStack
{
	private:
	 int *s;
	 int size;
	 int top;
	public:
	 CStack(int);
     bool isFull();
     bool isEmpty();
	 bool Push(int);
	 int Pop();
	 void Display();
};

