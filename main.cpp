#include<bits/stdc++.h>
#include"mystack.h"
using namespace std;

//int globalid=100;
//
//class person
//{
//    string name;
//    int id;
//    double salary;
//
// public:
//    person()
//    {
//        name="";
//        id=-1;
//        salary=1.0;
//    }
//
//    void setname(string name)
//    {
//        this->name=name;
//    }
//
//    void setsalary(double salary)
//    {
//        this->salary=salary;
//    }
//
//    person(string name,double salary)
//    {
//        setname(name);
//        setsalary(salary);
//        id=globalid;
//        globalid++;
//    }
//
//    int getid()
//    {
//        return id;
//    }
//
//    string getname()
//    {
//        return name;
//    }
//
//    double getsalary()
//    {
//        return salary;
//    }
//
//    void print()
//    {
//        cout<<name<<"  "<<id<<"  "<<salary<<endl;
//    }
//};
//
//int main()
//{
//    Stack<person>st;
//
//    person a("Shah_alam",65464.56);
//    person b("Shahin",55464.56);
//    person c("Shakib",45464.56);
//
//    st.push(a);
//    st.push(b);
//    st.push(c);
//
//    while(!st.empty())
//    {
//        person printobj;
//        printobj=st.pop();
//        printobj.print();
//    }
//
//    return 0;
//}

void reverse_word(string str)
{
    Stack<string>st;
    for(int i=0;i<str.length();i++)
    {
        string word="";
        while(i<str.length() && str[i]!=' ')
        {
            word+=str[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty())
    {
        cout<<st.Top()<<"  ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
    string s="i am a student";
    reverse_word(s);
}
