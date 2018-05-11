#include"hash.h"
main()
{
 int opt;
 hashing h;
 cnode *temp;
 temp=new cnode;
 int key;
 cout<<"--------Option--------"<<endl;
 cout<<"1]Insert\n2]Delete Element\n3]Search\n4]Makeempty\n5]Exit\n";
 cout<<"-------Exit----------"<<endl;
 cout<<"Enter the Option";
 cin>>opt;
 do{
  switch(opt)
  {
  case 1:
  //temp=h.getdata();
  cout<<"Enter the Details"<<endl;
  cout<<"Account Number:\t";
  cin>>temp->a.accno;
  cout<<"\nCustomer Name:\t";
  cin>>temp->a.customer_name;
  cout<<"\nBalance:\t";
  cin>>temp->a.balance;
   h.insert(temp);
   break;
  case 2:
   cout<<"Enter the element you want to delete?\t";
   cin>>key;
   h.deleteelement(key);
   break;
  case 3:
   cout<<"Enter the the element you wanna find?\t";
   cin>>key;
   h.search(key);
   break;
  case 4:
   h.makeempty();
   break;
  case 5:
   cout<<"Thank you"<<endl;
  default:
   cout<<"Enter a correct choice";
  }
 }while(opt==4);
}
