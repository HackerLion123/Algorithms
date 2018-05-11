#include"Lqueue.h"
main()
{
  int choice;
  int size;
  int id,pr;
  string name;
  cout << "Enter The Size" << endl;
  cin >> size;
  list Q(size);
  do
  {
   try
   {
     cout << "1.Enqueue\n2.Dequeue\n3.Display" << endl;
     cout << "4.Exit\n\nEnter Your Option" << endl;
     cin >> choice;
     if(choice<1||choice>4)
       throw 1;
     else
       switch(choice)
       {
         case 1:
                try
                {
                  if(!Q.IsFull()||Q.IsEmpty())
                  {
                    do
                    {
                      try
                      {
                        cout<<"*******Details*******\n";
                        cout << "Enter the Acc_no:\t";
                        cin >> id;
                        cout << endl;
                        if(id<1)
                          throw 2;
                      }
                      catch(int ele)
                      {
                        cerr << "staff Should Be > O" << endl;
                      }
                    }while(id<0);
                    cout<<"Enter the balance:\t";
                    cin>>pr;
                    cout << "Enter the Name:\t";
                    cin >> name;
                    cout << endl;
                    Q.enqueue(id,pr,name);
                    cout << "Successfully Enqueued In The Queue" << endl;
                  }
                  else
                    throw 4;
                }
               catch(int ele)
               {
                 cerr << "Queue Is Full" << endl;
               }
               break;
         case 2:
                try
                {
                  if(!Q.IsEmpty())
                  {
                    Q.dequeue();
                  }
                  else
                    throw 3;
                }
                catch(int ele)
                {
                  cerr << "Queue is Empty" << endl;
                }
                break;
         case 3:
                try
                {
                  if(!Q.IsEmpty())
                    Q.traverse();
                  else
                    throw 4;
                }
                catch(int ele)
                {
                  cerr << "Queue Is Empty" << endl;
                }
                break;
         case 4:
                cout << "Exit" << endl;
                break;
       }
   }
   catch(int ele)
   {
     cerr << "Enter Valid Option" << endl;
   }
  }while(choice!=4);
}
