#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node
{
public:
    T val;
    Node<T> *next;
    Node<T> *prev;

    Node(T val)
    {
        this->val=val;
        next=NULL;
        prev=NULL;
    }
};

template<typename ST>
class Stack
{
    Node<ST> *head;
    Node<ST> *top;
    int count =0;

public:
    Stack()
    {
        head=NULL;
        top=NULL;
    }
    //PUSH
    void push(ST val)
    {
        Node<ST> *newNode=new Node<ST>(val);

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
    ST pop()
    {
        Node<ST> *delnode;
        delnode=top;
        ST check;

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
    ST Top()
    {
        if(top==NULL)
            cout<<"Your stack is empty . "<<endl;
        else
            return top->val;
    }
};
