
#include<iostream>
using namespace std;
typedef unsigned int UINT;        

bool CheckBit(unsigned int iNo)
{
    UINT int imask = 67108864;  //27 bit
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
        cout<<"27'th bit ON\n";
    }
    else
    {
        cout<<"27'th bit OFF\n";
    }
    return 0;
}