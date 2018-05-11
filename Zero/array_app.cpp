#include"array.h"
main()
{
  int choice;
  int max;
  int element;
  int position;
  int flag=0;
  int flag1=0;
  CListArray arr;
  do
  {
    cout << "1.Create Array\n2.Intsert At Front\n3.Insert At End" << endl;
    cout << "4.Insert At Position\n5.Delete At First" << endl;
    cout << "6.Delete At Last\n7.Delete An Element" << endl;
    cout << "8.Find By Position\n9.Find By Element\n10.Travessel" << endl;
    cout << "11.Make Empty\n12.Exit\nEnter Your Option" << endl;
    cin >> choice;
    switch(choice)
    {
      case 1:
             if(flag==0)
             {
               cout << "Enter Maximum Size Of Array" << endl;
               cin >> max;
               flag1=arr.createArray(max);
               if(flag1==2)
                  cout << "Array Was Already Created" << endl;
               else
                  cout << "Array Is Craeted" << endl;
               flag=1;
             }
             else
               cout << "Array Was Already Created" << endl;
             break;
      case 2:
             if(flag==1)
             {
               cout << "Entert The Element To Be Inserted" << endl;
               cin >> element;
               flag1=arr.insertAtFront(element);
               if(flag1==-1)
                  cout << "Array Is Full" << endl;
               else
                  cout << "The Element Is Inserted " << endl;
                  arr.travessel();
             }
             else
               cout << "Array Was Not Created" << endl;
             break;
      case 3:
             if(flag==1)
             {
               cout << "Entert The Element To Be Inserted" << endl;
               cin >> element;
               flag1=arr.insertAtEnd(element);
               if(flag1==-1)
                  cout << "Array Is Full" << endl;
               else
                  cout << "The Element Is Inserted " << endl;
                  arr.travessel();
             }
             else
               cout << "Array Was Not Created" << endl;
             break;
      case 4:
             if(flag==1)
             {
               cout << "Entert The Element To Be Inserted" << endl;
               cin >> element;
               cout << "Element To Be Inserted In The Position" << endl;
               cin >> position;
               flag1=arr.insertAtPosition(element,position);
               if(flag1==-1)
                  cout << "Array Is Full" << endl;
               else if(flag1==-2)
                  cout << "Position Is Too Greater Than size" << endl;
               else
                  cout << "The Element Is Inserted " << endl;
                  arr.travessel();
             }
             else
               cout << "Array Was Not Created" << endl;
             break;
      case 5:
             if(flag==1)
             {
               flag1=arr.deleteAtFirst();
               if(flag1==-1)
                  cout << "Array Is Empty" << endl;
             }
             else
               cout << "Array Was Not Created" << endl;
             break;
      case 6:
             if(flag==1)
             {
               flag1=arr.deleteAtLast();
               if(flag1==-1)
                  cout << "Array Is Empty" << endl;
               else
                  cout << "The Element Is Deleted" << endl;
             }
             else
               cout << "Array Was Not Created" << endl;
             break;
      case 7:
             if(flag==1)
             {
               cout << "Enter The Element To Be Deleted" << endl;
               cin >> element;
               flag1=arr.deleteAnElement(element);
               if(flag1==-1)
                  cout << "Array Is Empty" << endl;
               else if(flag1==-2)
                  cout << "Given An Element Is Not An Element Of Array" << endl;
               else
                  cout << "The Element Is Deleted" << endl;
             }
             else
               cout << "Array Was Not Created" << endl;
             break;
      case 8:
             if(flag==1)
             {
               cout << "Eneter The Position Of Element To Be Find" << endl;
               cin >> position;
               element=arr.findByPosition(position);
               if(element==-1)
                  cout << "The Position Is Too Greater Then Size" << endl;
               else
                  cout << "The Element Is\t" << element << endl;
             }
             else
               cout << "Array Was Not Created" << endl;
             break;
      case 9:
             if(flag==1)
             {
               cout << "Enter The Element Of position To Be Find" << endl;
               cin >> element;
               position=arr.findByElement(element);
               if(position==-1)
                  cout << "The Element Was Not In That Array" << endl;
               else
               cout << "The Element Was Found In Position\t" << position <<endl;
             }
             else
                cout << "Array Was Not Created" << endl;
             break;
     case 10:
             if(flag==1)
             {
               arr.travessel();
             }
             else
                cout << "Array Was Not Created" << endl;
             break;
     case 11:
             if(flag==1)
             {
               flag1=arr.makeEmpty();
               if(flag1==-1)
                  cout << "Array Was Not Created" << endl;
               flag=0;
             }
             else
               cout << "Array Was Not Created" << endl;
             break;
     case 12:
             cout << "Exit" << endl;
             break;
     default:
             cout << "Enter The Valid Option" << endl;
             break;
   }
        }while(choice!=12);
}
