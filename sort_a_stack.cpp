#include<bits/stdc++.h>
#include"mystack.h"
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    Stack<int>s1,s2;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        s1.push(a);
    }

    while(!s1.empty())
    {
        int k=s1.Top();
        s1.pop();
        while(!s2.empty() && s2.Top()<k)
        {
            s1.push(s2.Top());
            s2.pop();
        }
        s2.push(k);
    }
    while(!s2.empty())
    {
        cout<<s2.Top()<<"  ";
        s2.pop();
    }
    cout<<endl;
    return 0;
}
