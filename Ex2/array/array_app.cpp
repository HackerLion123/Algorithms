#include"array.h"
main()
{
 int choice,ele;
 Cstack obj;
 b:
 {
  cout<<"******************************************"<<endl;
  cout<<"1]Push\n2]Pop\n3]Display\n4]Exit\n";
  cout<<"******************************************"<<endl;
  cout<<"Enter your choice"<<endl;
  cin>>choice;
  switch(choice)
  {
   case 1:
    cout<<"Enter the element to be inserted"<<"\t";
    cin>>ele;
    obj.push();
    obj.display();
    break;
   case 2:
    obj.pop();
    obj.display();
    break;
   case 3:
    obj.display();
    break;
   case 4:
    cout<<"Thank you"<<endl;
    break;
   default:
    cout<<"Wrong choice"<<endl;
    break;
  }
