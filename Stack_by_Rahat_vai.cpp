#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node
{
public:
    T val;
    Node *next;
    Node *prev;

    Node(T val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

template<typename ST>
class Stack
{
   public:
       Node<ST> *head;
       Node<ST> *top;

       Stack()
       {
           this->head=NULL;
           this->top=NULL;
       }
       void Push(ST val)
       {
           Node<ST> *newNode=new Node<ST>(val);

           if(head==NULL)
           {
               head=top=newNode;
               return ;
           }

           top->next=newNode;
           newNode->prev=top;
           top=newNode;
       }

       void Pop()
       {
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
       ST Top()
       {
           if(head==NULL)
           {
               cout<<"NO value in this stack "<<endl;
               return -1;
           }
           return top->val;
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
    Stack<char> *st=new Stack<char>();

    Stack<double> *st2=new Stack<double>();

    st->Push('a');
    st->Push('b');
    st->Push('c');

    st2->Push(1.8);
    st2->Push(5.6);
    st2->Push(6.9);

    cout<<st->Top()<<endl;

    st->Pop();
    st->Pop();

    cout<<st->Top()<<endl;

    cout<<st2->Top()<<endl;

    st2->Pop();
    st2->Pop();

    cout<<st2->Top()<<endl;

    if(st->Empty())
        cout<<"Stack is Empty . "<<endl;
    else
        cout<<"Stack is not empty . "<<endl;

    return 0;
}
