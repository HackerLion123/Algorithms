#include<iostream>
using namespace std;
struct data
{
 int accno;
 string customer_name;
 float balance;
};

class cnode
{
 public:
 data a;
 cnode *next;
};

class hashing
{
 private:
  cnode *bucket[10];
  void display(cnode*);
 public:
  cnode* getdata();
  hashing();
 ~hashing();
  void insert(cnode*);
  void deleteelement(int);
  void search(int);
  int hash(int);
  void makeempty();
};
