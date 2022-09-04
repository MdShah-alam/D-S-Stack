#include<bits/stdc++.h>
#include"mystack.h"
using namespace std;

int precisioncal(char c)
{
    if(c=='^')
        return 3;
    else if(c=='*' || c=='/')
        return 2;
    else if(c=='+' || c=='-')
        return 1;
    else
        return -1;
}

string infix_to_postfix(string chk)
{
    Stack<char>st;

    string result;

    for(int i=0;i<chk.length();i++)
    {
        if(chk[i]>='0' && chk[i]<='9')
            result+=chk[i];

        else if(chk[i]=='(')
            st.push(chk[i]);

        else if(chk[i]==')')
        {
            while(!st.empty() && st.Top()!='(')
                result+=st.pop();

            if(!st.empty())
                st.pop();
        }
        else
        {
            while(!st.empty() && precisioncal(st.Top())>=precisioncal(chk[i]))
            {
                result+=st.pop();
            }
            st.push(chk[i]);
        }
    }

    while(!st.empty())
        result+=st.pop();

    reverse(result.begin(),result.end());

    return result;
}

double postfix_Evaluation(string chk)
{
    Stack<double>st;

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
            double a=st.pop();
            double b=st.pop();

            cout<<"a-->  "<<a<<"  b-->"<<b<<endl;

            switch(chk[i])
            {
            case '+':
                st.push(b+a);
                break;
            case '-':
                st.push(b-a);
                break;
            case '*':
                st.push(b*a);
                break;
            case '/':
                st.push(b/a);
                break;
            case '^':
                st.push(pow(b,a));
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
    string infix="((7+(4*5))-(2+0))/3*2";

    string postfix;

    postfix=infix_to_postfix(infix);

    cout<<postfix<<endl<<endl;
    cout<<postfix_Evaluation(postfix)<<endl;
    return 0;
}
