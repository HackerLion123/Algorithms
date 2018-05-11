#include"list.h"
main()
{
 int choice,pos,no;
 string n,typ,add;
 float bal;
 Clist obj;
 b:
 {
  cout<<"*************************************************"<<'\n';
  cout<<"1]insert at front\n2]insert at position\n3]insert at end\n4]delete at first\n5]delete at last\n6]delete by position\n7]Exit\n";
  cout<<"*************************************************"<<'\n';
  cout<<"Enter ur choice"<<endl;
  cin>>choice;
  switch(choice)
  {
   case 1:
    cout<<"Enter the Details"<<endl;
    cout<<"Enter the account number"<<'\n';
    cin>>no;
    cout<<"Enter the customer name"<<'\n';
    cin>>n;
    cout<<"Enter the balance amount"<<'\n';
    cin>>bal;
    cout<<"Enter the account type"<<'\n';
    cin>>typ;
    cout<<"Enter the address"<<'\n';
    cin>>add;
    obj.insert_Front(no,n,bal,typ,add);
    obj.transverse();
    goto b;
    break;
   case 2:
    cout<<"Enter the Details"<<endl;
    cout<<"Enter the account number"<<'\n';
    cin>>no;
    cout<<"Enter the customer name"<<'\n';
    cin>>n;
    cout<<"Enter the balance amount"<<'\n';
    cin>>bal;
    cout<<"Enter the account type"<<'\n';
    cin>>typ;
    cout<<"Enter the address"<<'\n';
    cin>>add;
    cout<<"Enter the Position to insert"<<endl;
    cin>>pos;
    obj.insert_position(no,n,bal,typ,add,pos);
    obj.transverse();
    goto b;
    break;
   case 3:
    cout<<"Enter the Details"<<endl;
    cout<<"Enter the account number"<<'\n';
    cin>>no;
    cout<<"Enter the customer name"<<'\n';
    cin>>n;
    cout<<"Enter the balance amount"<<'\n';
    cin>>bal;
    cout<<"Enter the account type"<<'\n';
    cin>>typ;
    cout<<"Enter the address"<<'\n';
    cin>>add;
    obj.insert_End(no,n,bal,typ,add);
    obj.transverse();
    goto b;
    break;
   case 4:
    obj.delete_First();
    obj.transverse();
    goto b;
    break;
   case 5:
    obj.delete_Last();
    obj.transverse();
    goto b;
    break;
   case 6:
    cout<<"Enter the Element position"<<'\n';
    cin>>pos;
    obj.delete_position(pos);
    obj.transverse();
    goto b;
    break;
   case 7:
    obj.makeempty();
    break;
   case 8:
    cout<<"Thank you"<<'\n';
    break;
   default:
    cout<<"Wrong Choice"<<'\n';
    goto b;
    break;
  }
 }
}
