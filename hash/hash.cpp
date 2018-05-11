#include"hash.h"
hashing::hashing()
{
 for(int i=0;i<10;i++)
 {
	bucket[i]=new cnode;
  bucket[i]->next=NULL;
 }
}

hashing::~hashing()
{
 makeempty();
 delete bucket;
}

int hashing::hash(int key)
{
 return key%10;
}

void hashing::display(cnode *t)
{
 cout<<"----------Details-----------"<<endl;
 cout<<"Account Number:\t"<<t->a.accno << endl;
 cout<<"Customer Name:\t"<<t->a.customer_name<<endl;
 cout<<"Balance:"<<t->a.balance<<endl;
 cout<<"---------End----------------"<<endl; 
}

cnode* getdetails()
{
 cnode *t;
 cout<<"Enter the Details"<<endl;
 cout<<"Account Number:\t";
 cin>>t->a.accno;
 cout<<"\nCustomer Name:\t";
 cin>>t->a.customer_name;
 cout<<"\nBalance:\t";
 cin>>t->a.balance;
 return t;
}

void hashing::search(int key)
{
 int k;
 k=hash(key);
 cnode *t;
 int fl;
 while(bucket[k]!=NULL)
 {
  if(bucket[k]!=NULL)
  {
   t=bucket[k];
   if(t->a.accno==key)
    break;
   else
    t=t->next;
  }
  else
   fl=-1;
 }
 if(fl!=-1)
 {
  cout<<"Element is found";
  display(t);
 }
} 
void hashing::makeempty()
{
 for(int i=0;i<10;i++)
  delete bucket[i];
}

void hashing::insert(cnode* t)
{
 int k=hash(t->a.accno);
 cnode* curr=bucket[k];
 t->next=curr;
 bucket[k]=t;
}

void hashing::deleteelement(int key)
{
 int k;
 k=hash(key);
 cnode *t;
 if(bucket[k]!=NULL)
 {
  t=bucket[k];
  if(t->a.accno==key)
  {
   bucket[k]=t->next;
   delete t;
  }
  else
  {
	 while(t!=NULL)
   {
    if(t->a.accno==key)
     delete t;
    t=t->next;
   } 
  }
 }
}
