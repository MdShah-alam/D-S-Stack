#include<bits/stdc++.h>
#include"mystack.h"
using namespace std;

int globalid=100;

class preson
{
    string name;
    int id;
    double salary;

    preson()
    {
        string name="";
        int id=-1;
        double salary=1.00;
    }

    void setname(string name)
    {
        this->name=name;
    }

    void setsalary(double salary)
    {
        this->salary=salary;
    }

    preson(string name,double salary)
    {
        setname(name);
        setsalary(salary);
        id=globalid;
        globalid++;
    }

    int getid()
    {
        return id;
    }

    string getname()
    {
        return name;
    }

    double getsalary()
    {
        return salary;
    }

    void print()
    {
        cout<<name<<"  "<<id<<"  "<<salary<<endl;
    }
};

int main()
{
//    Stack<preson>st;
//    int n;
//    cout<<"Enter employ number ";
//    cin>>n;
//
//    person a[n];
//
//    cout<<"Enter name and salary : ";
//    for(int i=0;i<n;i++)
//    {
//        cin>>a[i];
//        st.push(a[i]);
//    }

    Stack<preson>st;
    person a ("shah_alam",5645345.545);
    person b ("shakib",56453.45);
    person c ("shahin",45345.545);

    st.push(a);
    st.push(b);
    st.push(c);

    while(!st.empty())
    {
        person printobj;
        printobj=st.pop();
        printobj.print();
    }

    return 0;
}
