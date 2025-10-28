
#include<iostream>
using namespace std;
typedef unsigned int UINT;         //replace by compiler

bool CheckBit(UINT iNo)
{
    UINT  imask = 8;
    UINT  iResult = 0;
    
    iResult = iNo & imask;
    return (iResult == imask);
}
int main()
{
    UINT  iValue=0;
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