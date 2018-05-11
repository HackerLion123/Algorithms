#include"heap.h"
int main()
{       int opt;
        int cap;
        int x=1;
        cout<<"Enter capacity\n";
        cin>>cap;
        BinHeap b(cap,x);
        node i;
        do
				{
				cout<<"*************select your option:***************\n\n";
                cout<<"1.Enqueue \n";
                cout<<"2.Delete\n";
                cout<<"3.print\n";
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
                                x++;
                        break;
                }
                case 2:
                {
                        int j;
                       j=b.dequeue();
                        x--;
                        if(j==-1)
                                cout<<"\nHeap is empty\n\n";
                        break;
                }
		            case 3:
                {      

                        cout<<"x:"<<x;
                        cout<<"\nDetails:\n\n";
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

