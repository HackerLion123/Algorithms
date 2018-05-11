#include<iostream>
using namespace std;
class cFunction
{
 int *data;
 int  size,max_size;
 public:
  void create_Array();
  void insert_Front(int ele);
  void insert_Postion(int ele,int pos);
  void insert_End(int ele);
  void delete_First();
  void delete_Last();
  void delete_Element(int ele);
  int  find_Element(int ele);
  int  find_Position(int pos);
  void traverse();
  void makeempty();
};
