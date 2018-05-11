#include<iostream>
using namespace std;
class CListArray
{
    int *data;
    int size;
    int maxsize;
  public:
    CListArray();
    CListArray(int);
    int createArray(int);
    int insertAtFront(int);
    int insertAtEnd(int);
    int insertAtPosition(int,int);
    int deleteAtFirst();
    int deleteAtLast();
    int deleteAnElement(int);
    int findByPosition(int);
    int findByElement(int);
    void travessel();
    int makeEmpty();
};
