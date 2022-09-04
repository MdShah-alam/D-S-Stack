#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val=val;
        next=NULL;
    }
};

void insert_at_tail(Node *&head,int val)
{
    Node *newNode=new Node(val);

    if(head==NULL)
    {
        head=newNode;
        return ;
    }
    Node *temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}

Node *reverse_node(Node *&head,int k)
{
    Node *curr=head;
    Node *prev=NULL;
    Node *nxt;

    for(int i=1;i<k&&curr!=NULL;i++)
    {
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }

    if(nxt!=NULL)
        head->next=reverse_node(nxt,k);
    return prev;
}

void display(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->val<<"   ";
        n=n->next;
    }
}


int main()
{
    Node *head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        insert_at_tail(head,i+1);
    }
    int k;
    cin>>k;
    head=reverse_node(head,k);
    display(head);
}
