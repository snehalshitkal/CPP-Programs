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
    cout<<MaxNo(11,15,77)<<"\n";
    cout<<MaxNo(11.6,85.7,77.6)<<"\n";
    cout<<MaxNo(45.84,15.78,77.55)<<"\n";
    return 0;
}