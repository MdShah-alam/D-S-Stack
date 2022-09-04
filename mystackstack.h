#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
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

class Stack
{
    Node *head;
    Node *top;
    int count =0;

public:
    Stack()
    {
        head=NULL;
        top=NULL;
    }
    //PUSH
    void push(int val)
    {
        Node *newNode=new Node(val);

        if(head==NULL)
        {
            head=top=newNode;
            count++;
            return ;
        }

        top->next=newNode;
        newNode->prev=top;
        top=newNode;
        count++;
    }
    //POP
    int pop()
    {
        Node *delnode;
        delnode=top;
        int check=-1;

        if(head==NULL)
        {
            cout<<"Your stack is empty . "<<endl;
            return check;
        }

        if(top==head)
        {
            head=top=NULL;
        }

        else
        {
            top=delnode->prev;
            top->next=NULL;
        }

        count++;
        check=delnode->val;
        delete delnode;
        return check;
    }
    //EMPTY
    bool empty()
    {
        if(head==NULL)
            return true;
        else
            return false;
    }
    //SIZE
    int size()
    {
        return count;
    }
    //TOP
    int Top()
    {
        if(top==NULL)
            cout<<"Your stack is empty . "<<endl;
        else
            return top->val;
    }
};

int main()
{

}
