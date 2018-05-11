#include"avltree.h"
main()
{
 int choice;
 int accno;
 string cusname;
 float bal;
 Avltree t;
 cnode *cur,*cur1,*cur2,*cur3;
 do{
   try{
      cout << "\t\t\t-Options-\t\t\t" << endl;
      cout << "1.Insert"<<endl;
      cout<<"2.Search\n3.Find Min\n5.Inorder Travere\n6.Preorder traverse \n7.Postorder traverse\n8.Make Empty\n9.Exit" << endl;
      cout << "Enter Your Option" << endl;
      cin >> choice;
      if(choice<1||choice>9)
        throw 1;
      else
       switch(choice){
         case 1:
          cur = new cnode();
          do{
            try{
             cout << "Enter The accno:\t";
             cin >> accno;
             if(accno<1)
              throw 1;
            }
            catch(int ele){
             cerr << "Account number must Be Positive" << endl;
            }
            }while(accno<1);
              cout<<"customer name:\t";
              cin>>cusname;
              cout<<"Balance:\t";
              cin>>bal;
              cout<<endl;
              cur = t.find(accno,t.root);
              if(cur==NULL){
                t.root=t.insert(t.root,accno,cusname,bal);
                cout<<"Node is inserted\n";
              }
              else
                cout<<"Already present\n";
              break;
       case 2:
              cur1=new cnode();
              cout<<"Enter The Acc-No:\t";
              cin>>accno;
              cout << endl;
              cur1=t.find(accno,t.root);
              if(cur1!=NULL){
                cout<<"Account No:\t"<<cur1->acc_no << endl;;
                cout<<"Customer Name:\t"<<cur1->customer_name<<endl;
                cout<<"Balance:\t"<<cur1->balance<<endl;
              }
              else
                cout<<"Element not found\n";
              break;
       case 3:
              cur2=new cnode();
              if(t.root!=NULL){
                cur2=t.findmin(t.root);
                if(cur2!=NULL){
                  cout<<"Acc no:\t"<<cur2->acc_no << endl;;
                  cout<<"Customer Name:\t"<<cur2->customer_name<<endl;
                  cout<<"Balance:\t"<<cur1->balance<<endl;
                }
              }
              else
              cout<<"Empty Tree\n";
              break;
       case 5:
                 if(t.root!=NULL){
                   cout<<"Binary Tree In Inorder Is---\n";
                   t.inorder(t.root);
                 }
                 else
                   cout<<"Empty Tree\n";
                 break;
          case 6:
                 if(t.root!=NULL){
                   cout<<"Binary Tree In Preorder Is---\n";
                   t.preorder(t.root);
                 }
                 else
                   cout<<"Empty Tree\n";
                 break;
          case 7:
                 if(t.root!=NULL){
                   cout<<"Binary Tree In Postorder Is---\n";
                   t.postorder(t.root);
                 }
                 else
                   cout<<"Empty Tree\n";
                 break;
          case 8:
                 t.makeempty(t.root);
                 if(t.root==NULL)
                   cout<<"Tree is Empty\n";
                 break;
       }
    }
    catch(int){
      cerr << "Enter Valid Option" << endl;
    }
  }while(choice!=9);
}
