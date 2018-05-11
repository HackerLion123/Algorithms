#include"CStack.h"
main()
{
int i,choice,size,element;
cout<<"Enter the size of stack :"<<endl;
cin>>size;
CStack S(size);
do
{
cout<<endl<<"\t1 - Push an element"<<endl;
cout<<"\t2 - Pop a element"<<endl;
cout<<"\t3 - Show the stack"<<endl;
cout<<"\t4 - Exit"<<endl;
cout<<"\tEnter the choice"<<endl;
cin>>choice;
switch(choice)
{
case 1:
 cout<<"Enter an element to push"<<endl;
 cin>>element;
  if(S.Push(element))
  {
      cout<<" The element "<<element<<" is pushed into the stack"<<endl;
  }
  else
  {
      cout<<"Stack is FULL"<<endl;
  }
 break;
case 2:
 element=S.Pop();
 if(element!=-1)
  cout<<"\tPoped element is "<<element;
 else
  cout<<"Stack is EMPTY"<<endl;
 break;
case 3:
  S.Display();
 break;
case 4:
 exit(0);
}
}
while(choice>0&&choice<5);
}

