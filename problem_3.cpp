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

void middele_element(Node* head)
{
    Node* tmp=head;
    int count=0; 
    while(tmp!=NULL)
    {
        tmp=tmp->next;
        count++;
    }
    int n=count/2;
    Node* tmp2=head;
    if(n/2==0)
    {
         for (int i = 1; i <=n; i++)
    {
          tmp2=tmp2->next;
    }
    cout<<tmp2->val<<endl;
    }
    else
    {
            for (int i = 1; i <n; i++)
    {
          tmp2=tmp2->next;
    }
        cout<<tmp2->val<<" "<<tmp2->next->val<<endl;
    }
   
    
}

void print (Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" "<<endl;
        tmp=tmp->next;
    }
};
int main()
{
    int val;
    Node* head=NULL;
    while(true)
    {

        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,val);
    }
    //    int pos;
    //     cin>>pos;
    //     int v;
    //     cin>>v;
        
    print(head);
    
    middele_element(head);
    return 0;
}