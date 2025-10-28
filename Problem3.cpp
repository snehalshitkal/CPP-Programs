
#include<iostream>
using namespace std;
bool CheckBit(int iNo)
{
    int imask = 8;
    int iResult = 0;
    iResult = iNo & imask;
    return (iResult == imask)
}
int main()
{
    int iValue=0;
    bool bRet = false;
    cout<<"Enter Number from user:\n";
    cin>>iValue;
    bRet = CheckBit(iValue);
    if (bRet == true)
    {
        cout<<"4'th bit ON\n";
    }
    else
    {
        cout<<"4'th bit OFF\n";
    }
    return 0;
}