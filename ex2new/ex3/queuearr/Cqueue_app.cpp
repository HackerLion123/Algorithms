#include"Cqueue.h"
main()
{
  int choice;
  int size;
  int ele;
  cout << "Enter The Size Of Queue" << endl;
  cin >> size;
  CQueue Q(size);
  do
  {
    try
    {
      cout << "1.Enqueue\n2.Dequeue\n3.Traverse" << endl;
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
                   if(!Q.IsFull())
                   {
                     cout << "Enter The Element To Be Enqueue" << endl;
                     cin >> ele;
                     Q.enqueue(ele);
                     cout << "Enqueued Element:\t" << ele << endl;
                   }
                   else
                     throw 2;
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
                     ele = Q.dequeue();
                     cout << "Dequeued Element:\t" << ele << endl;
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
