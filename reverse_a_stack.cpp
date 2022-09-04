#include<bits/stdc++.h>
#include"mystack.h"
using namespace std;

void insert_at_bottom(Stack<int>&chk,int chkelement)
{
    if(chk.empty())
    {
        chk.push(chkelement);
        return ;
    }

    int topelement=chk.Top();
    chk.pop();
    insert_at_bottom(chk,chkelement);

    chk.push(topelement);
}
void reverse_recursive(Stack<int>&chk)
{
    if(chk.empty())
    {
        return ;
    }
    int topelement=chk.Top();
    chk.pop();
    reverse_recursive(chk);

    insert_at_bottom(chk,topelement);

}

int main()
{
    Stack<int>st;
    st.push(1);
    st.push(2);
    st.push(9);
    st.push(4);
    st.push(5);

    reverse_recursive(st);

    while(!st.empty())
    {
        cout<<st.pop()<<"  ";
    }
    cout<<endl<<endl;

    return 0;
}
