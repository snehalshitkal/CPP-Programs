#include<iostream>
using namespace std;
template<class T>
T MaxNo(T No1,T No2,T No3)
{
    if((No1>No2)&&(No1>No3))
    {
        return No1;
    }
    else if((No2>No1)&&(No2>No3))
    {
        return No2;
    }
    else
    {
        return No3;
    }

}
int main()
{
    int Value1,Value2,Value3,Ret;
    cout<<"Enter First Number:\n";
    cin>>Value1;

    cout<<"Enter second Number:\n";
    cin>>Value2;

    cout<<"Enter Third Number:\n";
    cin>>Value3;

    Ret = MaxNo(Value1,Value2,Value3);
    cout<<"Large no are:"<<Ret<<"\n";
    return 0;
}