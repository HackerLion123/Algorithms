#include"heap.h"
int main()
{       int opt;
        int cap;
        int x=0;
        cout<<"Enter capacity\n";
        cin>>cap;
        BinHeap b(cap,x);
        Info i;
        do
				{
				cout<<"*************select your option:***************\n\n";
                cout<<"1.Insert computer details\n";
                cout<<"2.Deletion\n";
                cout<<"3.return Front\n";
                cout<<"4.Exit\n";
                
                cin>>opt;
                switch(opt)
                {
                case 1:
                {
                        int j;
                        i=b.getData();
                        j=b.enqueue(i);
                        if(j==-1)
                                cout<<"\nHeap is full !\n";
                        else
                                cout<<"\nInsertion success\n";
                        break;
                }
                case 2:
                {
                        int j;
                        j=b.dequeue();
                        if(j==-1)
                                cout<<"\nHeap is empty\n\n";
                        break;
                }
		 case 3:
                {
                        int x=1;
                        cout<<"\nThe  details of computers:\n\n";
                        b.inOrder(x);
                        break;
                }
                case 4:
                        cout<<"Thank You\n";
                        break;
                default:
                        cout<<"Invalid option\n\n";
                }
        }while(opt!=4);
return 1;
}

