#include<iostream>
using namespace std;
struct cUser
{
  public:
   int acc_no;
   string customer_name;
   float balance;
   string acc_type;
   string address;
   cUser *next;
};

class Clist
{
 public:
   cUser *head;
   Clist();
  ~Clist(){delete head;}
   void insert_Front(int ,string,float,string,string);
   void insert_End(int,string,float,string,string);
   void insert_position(int,string,float,string,string,int);
   int  delete_First();
   void delete_Last();
   int  delete_position(int);
   int  makeempty();
   int  transverse();
};
