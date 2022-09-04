#include<bits/stdc++.h>
using namespace std;

class Node
{
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val=val;
        next=NULL;
        prev=NULL;
    }
};

void insert_at_tail(doublyNode *&head,int val)
{
    doublyNode *newNode=new doublyNode(val);

    if(head==NULL)
    {
        head=newNode;
        return ;
    }

    doublyNode *temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=newNode;

    newNode->prev=temp;
}

void insert_at_head(doublyNode *&head,int val)
{
    doublyNode *newNode=new doublyNode(val);

    head->prev=newNode;

    newNode->next=head;

    head=newNode;
}

int main()
{
    int n;
    cin>>n;
    Node *head=NULL;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        insert_at_tail(head,i+1);
        insert_at_tail(head,b);
        insert_at_head(head,a);
    }


}
