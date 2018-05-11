#include"cStackLList.h"
int main()
{
    char ch;
    int maxsize;
    int choice;
    int position;
    int roomno;
    string avail;
    int pay;
    cStackLList::cNode *t;
    cout<<endl<<endl;
    cout<<"Enter the maximum size of the stack"<<endl;
    cin>>maxsize;
    OUTmenu:
    if(maxsize>0)
    {
        cStackLList List1(maxsize);
    menu1:
    cout<<endl;
    cout<<"OPTIONS"<<endl;
    cout<<"1]Push    "<<endl;
    cout<<"2]Pop     "<<endl;
    cout<<"3]Display "<<endl;
    cout<<"4]Exit    "<<endl;
    cout<<"Enter the Choice : ";
    cin>>choice;
    cout<<endl<<endl;
    switch(choice)
    {
    case 1:
        cout<<endl<<"Enter the Acc no : ";
        cin>>roomno;
        cout<<endl<<"Enter the name of a customer : ";
        cin>>avail;
        cout<<endl<<"Enter the balance : ";
        cin>>pay;
        if(List1.push(roomno,avail,pay))
        {
             cout<<endl<<"inserted successfully"<<endl;
             List1.showStack();
        }
        else
        {
            cout<<endl<<"Stack is FULL"<<endl;
        }
        goto menu1;
    case 2:
        t=List1.pop();
        if(t!=NULL)
        {
            cout<<endl<<"The details in Acc_no "<<t->id<<" are deleted successfully"<<endl;
            List1.showStack();
        }
        else
        {
            cout<<endl<<"Stack is EMPTY "<<endl;
        }
        goto menu1;
    
              
    case 3:
        List1.showStack();
        goto menu1;
    case 4:
        
         exit(0);
         break;
    default:
        cout<<"Enter a valid choice "<<endl;
        goto menu1;
    }
    }
    else
    {
        cout<<"Invalid Size"<<endl;
        goto OUTmenu;
    }
}
