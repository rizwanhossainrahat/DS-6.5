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

}
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
void print(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int main()
{
    int val;
    Node* head=NULL;
    while(true)
    {
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head,val);
    }
    // print(head);
    cout<<size(head)<<endl;
    return 0;
}