#include<iostream>
#include<stdlib.h>
using namespace std;
class cStackLList
{
    int top;
    int maxSize;
   public:
    class cNode
    {
     public:
        cNode *next;
        int id;
		string na;
		int age;
    };
    cNode *head;
        cStackLList(int max);
        bool push(int,string,int);
        cNode* pop();
        void showStack();
        ~cStackLList();
        bool isEmpty();
        bool isFull();
		
};

