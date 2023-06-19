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
// void middle(Node* head)
// {
//     Node* tmp=head;
//     int count=0;
//     while(tmp!=NULL)
//     {
//         tmp=tmp->next;
//         count++;
//     }    
//     for(int i=1;i<count/2;i++)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }     
    
// };
void asending_sort(Node *head)
{
    Node* tmp=head;
    int flag=1;
    while(tmp->next->next !=NULL)
    {
       tmp=tmp->next; 
        if(tmp->val > tmp->next->val)
        {
            flag=0;
            break;
        }
          
     }
     if(flag==0)
     {
        cout<<"NO"<<endl;
     }
     else
     {
          cout<<"YES"<<endl;
     }
     
}
// void insertHead(Node* head)
// {

// }
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
    asending_sort(head);
    // middle(head);
    return 0;
}