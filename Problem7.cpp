
#include<iostream>
using namespace std;
typedef unsigned int UINT;        

bool CheckBit(UINT int iNo)
{
    UINT int imask = 32;
    UINT int iResult = 0;
    
    iResult = iNo & imask;
    return (iResult == imask);
}
int main()
{
    UINT int iValue=0;
    bool bRet = false;
    cout<<"Enter Number from user:\n";
    cin>>iValue;
    bRet = CheckBit(iValue);
    if (bRet == true)
    {
        cout<<"12'th bit ON\n";
    }
    else
    {
        cout<<"12'th bit OFF\n";
    }
    return 0;
}