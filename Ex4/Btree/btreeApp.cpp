#include"btree.h"
int main()
{
  int opt,x;
  string com;
  node* droot;
  droot=new node;
  CTree t;
  droot=t.getRoot();
  do
  {
 cout<<"\t\t-----BINARY TREE--------\n";
    cout<<"\t ---options---\n";
    cout<<"\t1-Insert\n\t2-Search\n\t3-Find minimum\n";
    cout<<"\t4-Find maximum\n\t5-Print inorder\n";
    cout<<"\t6-postorder\n\t7-preorder\n\t8-Deletion\n\t9-make Empty\n\t10-exit\n";
    cout<<"Enter the option :";
    cin>>opt;
    switch(opt)
    {
      case 1:
      {
        node *cur=new node;
        do
        {
          try
          {
            cout << "Enter the Account Number:\t";
            cin >> x;
            if(x==0)
               throw 1;
          }
          catch(int ele)
          {
            cerr << "Error: Accno cant be Null" << endl;
          }
        }
        while(x<1);
        cout<<"Customer Name:\t";
        cin>>com;
        cout << endl;  
        cur=t.search(x,droot);
        if(cur==NULL)
        {
          droot=t.insert(x,com,droot);
          cout<<"Node is inserted\n";
        }
        else
          cout<<"Already presnt\n";
          t.setRoot(droot);
       }
       break;
      case 2:
      {
				node *cur1=new node;
        cout<<"Enter your account number:\t";
        cin>>x;
        cout << endl;
        cur1=t.search(x,droot);
        if(cur1!=NULL)
        {
             cout<<"Account Number:\t"<<cur1->Accno<< endl;;
             cout<<"Customer name:\t"<<cur1->cust_name<<endl;
        }
        else
          cout<<"Element not found\n";
        t.setRoot(droot);
        break;
      }
	    case 3:
	    {
	      node *cur2=new node;
        if(droot!=NULL)
        {
          cur2=t.findMin(droot);
          if(cur2!=NULL)
          {
             cout<<"Account number:\t"<<cur2->Accno << endl;;
             cout<<"Customer Name:\t"<<cur2->cust_name<<endl;
          }
        }
  		  else
		      cout<<"Empty tree...\n";
	      break;
	    }
	    case 4:
  	  {
	  	  node *cur3=new node;
        if(droot!=NULL)
        {
          cur3=t.findMax(droot);
           if(cur3!=NULL)
           {
             cout<<"Account number:\t"<<cur3->Accno << endl;;
             cout<<"Customer name:\t"<<cur3->cust_name<<endl;
           }
        }
     	  else
	         cout<<"Empty tree...\n";
	      break;
	    }
	    case 5:
        if(droot!=NULL)
	      {
		      cout<<"Binary tree in inorder is:\n";
		      t.inorder(droot);
        }
        else
          cout<<"Empty tree....\n";
		    break;
	    case 6:
        if(droot!=NULL)
	      {
  		    cout<<"Binary tree in Postorder is--\n";
	  	    t.postorder(droot);
        }
        else
          cout<<"Empty tree.....\n";
		    break;
	    case 7:
        if(droot!=NULL)
	      {
	    	  cout<<"Binary tree in Preorder is--\n";
		      t.preorder(droot);
        }
        else
          cout<<"Empty tree.....\n";
		    break;
	    case 8:
      {
        node* cur4=new node;
        cout<<"Enter BookingID:\t";
	      cin>>x;
        cout << endl;
        cur4=t.search(x,droot);
        if(cur4!=NULL)
        {
          droot=t.deletion(x,droot);
	        cout<<"Element is deleted\n";
        }
        else
          cout<<"Element not present\n";
      }
        break;
      case 9:
        droot=t.makeEmpty(droot);
        if(droot==NULL)
          cout<<"Tree made empty\n";
        t.setRoot(droot);
        break;
	    case 10:
	      cout<<"Exit......\n";
		    break;
	    default:
	      cout<<"Invalid option !!!\n";
		    break;
	  }
  }while(opt!=10);
}
