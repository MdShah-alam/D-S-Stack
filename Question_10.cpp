#include<bits/stdc++.h>
#include"MyHeaderFile-.h"
using namespace std;

int main()
{
    mystack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(9);
    st.push(7);

    cout <<"Middle Element : "<< st.findMiddle() << endl;

    return 0;
}
