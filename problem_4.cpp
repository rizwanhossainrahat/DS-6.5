#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node* &head,int val)
{
    // cout<<"give valu"<<endl;
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        
        head=newnode;
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        
        tmp=tmp->next;
    }
    tmp->next=newnode;
};
int size(Node* head)
{
    Node* tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        tmp=tmp->next;
        count++;
    }
    return count;
}
void inset_at_head(Node* &head,int v)
{
    Node* newnode=new Node(v);
    newnode->next=head;
    head=newnode;
   
}
void insert_at_any_position(Node* &head,int pos,int v)
{
    Node* newnode=new Node(v);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    
     newnode->next=tmp->next;
     tmp->next=newnode;
}
void insert_at_tail_2(Node* &head,int v)
{
    Node* newnode=new Node(v);
    Node* tmp=head;
    
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
 void print_linklist(Node* head)
 {
    
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
 }

int main()
{
    int val;
   
    Node* head=NULL;
    while (true)
    {
        cin>>val;
        if(val==-1)break;
        {
            insert_at_tail(head,val);
        }
    }
     int n;
     cin>>n;
   int pos;
   int v;
    for (int i = 1; i <=n; i++)
    {
      
       cin>>pos;
       cin>>v;
         if(pos==0)
       {
        
         inset_at_head(head,v);
        //  print_linklist(head);
         
       }
        else if(pos<size(head))
       {
            insert_at_any_position(head,pos,v);
            // print_linklist(head);
       }
       else if(pos==size(head))
       {
            insert_at_tail(head,v);
            // print_linklist(head);
       }
       
    }
      
      
    print_linklist(head);
   
    
    return 0;
}