#include"function.h"
main()
{
 int choice,ele,pos;
 cFunction obj;
 b:
 {
 cout<<"1]Insert front\n2]Insert Position\n3]Insert End\n4]Find element\n5]Find postion\n6]Delete first\n7]delete last\n8]delete element\n9]Traverse\n10]Exit\n";
 cout<<"Enter ur choice"<<endl;
 cin>>choice;
 switch(choice)
 {
  case 1:
   cout<<"Enter the element"<<endl;
   cin>>ele;
   obj.insert_Front(ele);
   goto b;
   break;
  case 2:
   cout<<"Enter the element"<<endl;
   cin>>ele;
   cout<<"Enter the Position to insert"<<endl;
   cin>>pos;
   obj.insert_Postion(ele,pos);
   goto b;
   break;
  case 3:
   cout<<"Enter the element"<<endl;
   cin>>ele;
   obj.insert_End(ele);
   goto b;
   break;
  case 4:
   cout<<"Enter the element you want to find"<<endl;
   cin>>ele;
   obj.find_Element(ele);
   goto b;
   break;
  case 5:
   cout<<"Enter the position"<<endl;
   cin>>ele;
   obj.find_Position(pos);
   goto b;
   break;
  case 6:
   obj.delete_First();
   goto b;
   break;
  case 7:
   obj.delete_Last();
   goto b;
   break;
  case 8:
    cout<<"Enter the element you wanna delete"<<endl;
    cin>>ele;
    obj.delete_Element(ele);
    goto b;
    break;
  case 9:
    obj.traverse();
    goto b;
    break;
  case 10:
     obj.makeempty();
     cout<<"Thank u"<<endl;
     break;
  }
 }
}
