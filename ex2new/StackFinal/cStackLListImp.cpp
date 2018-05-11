#include"cStackLList.h"
cStackLList::cStackLList(int max)
{
    head=new cNode;
    head->next=NULL;
    top=-1;
    maxSize=max;
}



bool cStackLList::push(int roomno,string avail,int ag)
{
    if(!isFull())
    {
        cNode *node;
        top++;
        node=new cNode;
        if(head->next==NULL)
        {
            node->next=NULL;
            head->next=node;
            node->id=roomno;
			node->na=avail;
			node->age=ag;
        }
        else
        {
            cNode *temp;
            temp=new cNode;
            temp=head->next;
			node->id=roomno;
			node->na=avail;
			node->age=ag;
            node->next=temp;
            head->next=node;
        }
        return true;
    }
    return false;
}
cStackLList::cNode*  cStackLList::pop()
{
    if(!isEmpty())
    {
        
        cNode *temp,*prev;
        prev=new cNode;
        temp=new cNode;
        temp=head->next;
        prev=temp;
        head->next=temp->next;
        top--;
        return prev;
    }
    return NULL;
}
void cStackLList::showStack()
{
    if(!isEmpty())
    {
        cNode *temp;
        temp=new cNode;
        temp=head->next;
        while(temp!=NULL)
        {
		        cout<<"\nAccount Number:\t"<<temp->id<<"\nName:\t"<<temp->na<<"\nbalance:\t"<<temp->age<<endl;
            temp=temp->next;
        }

    }
    else
    {
        cout<<"Stack is EMPTY"<<endl;
    }
}
bool cStackLList::isEmpty()
{
    if(top==-1)
    {
        return true;
    }
    return false;
}
bool cStackLList::isFull()
{
    if(top==maxSize-1)
    {
        return true;
    }
    return false;
}
cStackLList::~cStackLList()
{
    delete head;
}
