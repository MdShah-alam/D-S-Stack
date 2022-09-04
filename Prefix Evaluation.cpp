#include<bits/stdc++.h>
#include"mystack.h"
using namespace std;

int Prefix_Evaluation(string chk)
{
    Stack<int>st;

    reverse(chk.begin(),chk.end());

    cout << chk<<endl;

    reverse(chk.begin(),chk.end());

    cout << chk<<endl;

    for(int i=chk.length()-1; i>=0; i--)
    {
        //chk 0 to 9 ....oparent
        if(chk[i]>='0' && chk[i]<='9')
        {
            st.push(chk[i]-'0');
        }
        //chk +,-,*,/,^ .....oparetor
        else
        {
            int a=st.pop();
            int b=st.pop();

            switch(chk[i])
            {
            case '+':
                st.push(a+b);
                break;
            case '-':
                st.push(a-b);
                break;
            case '*':
                st.push(a*b);
                break;
            case '/':
                st.push(a/b);
                break;
            case '^':
                st.push(pow(a,b));
                break;
            default:
                break;
            }
        }
    }
    return st.Top();
}

int main()
{
    cout<<Prefix_Evaluation("+9*3/84")<<endl<<endl;
    cout<<Prefix_Evaluation("-+7*45+20")<<endl;

    return 0;
}
