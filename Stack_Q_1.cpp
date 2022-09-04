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
public:
    Node *head;
    Node *top;

    Stack()
    {
        this->head=NULL;
        this->top=NULL;
    }

    void Push(int val)
    {
        Node *newNode=new Node(val);

        if(head==NULL)
        {
            head=top=newNode;
            return ;
        }
        else
        {
            top->next=newNode;
            newNode->prev=top;
            top=newNode;
        }
    }

    void Pop()
    {
//        if(head==NULL)
//        {
//            cout<<"stack is underflow ."<<endl;
//            return ;
//        }
//        if(head==top)
//        {
//            head=top=NULL;
//        }
//        else
//        {
//            Node *delNode=top;
//            top=top->prev;
//            top->next=NULL;
//            delete delNode;
//        }

        if(head==NULL)
        {
            cout<<"Stack underflow . "<<endl;
            return ;
        }
        if(head==top)
        {
            head=top=NULL;
            delete head;
        }
        else
        {
            top=top->prev;
            top->next=NULL;
        }
    }

    int Top()
    {
        if(head==NULL)
        {
            cout<<"stack is underflow ."<<endl;
            return -1;
        }
        else
        {
            return top->val;
        }
    }

    bool Empty()
    {
        if(head==NULL)
            return true;
        else return false;
    }
};

int main()
{
    Stack *st=new Stack();

    st->Push(1);
    st->Push(2);
    st->Push(3);
    st->Push(4);
    st->Push(5);

    if(!st->Empty())
    {
        cout<<st->Top()<<endl;
        st->Pop();
    }

    return 0;
}
