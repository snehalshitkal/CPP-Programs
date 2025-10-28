#include<iostream>
using namespace std;

template<class T>

T Addition(T No1,T No2)
{
    T Ans;
    Ans = No1+ No2;
    return Ans;
}
int main()
{
    cout<<Addition(10,11)<<"\n";
    cout<<Addition(10.5,11.5)<<"\n";
    cout<<Addition(10.22,11.22)<<"\n";
    return 0;
}