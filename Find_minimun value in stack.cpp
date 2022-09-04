#include<bits/stdc++.h>
#include"mystack.h"
using namespace std;

int main()
{
    int n;
    cin>>n;
    Stack<int>st;
    Stack<int>mini;
    int minimum=10000000;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        st.push(a);
        if(minimum>=a)
        {
           mini.push(a);
           minimum=a;
        }
    }

    while(!st.empty())
    {
        if(mini.Top()<st.Top())
        {
            cout<<mini.Top()<< "   ";
            st.pop();
        }
        else
        {
            cout<<mini.Top()<<"  ";
            mini.pop();
            st.pop();
        }
    }
    cout<<endl;
    return 0;
}
