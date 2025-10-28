
#include<iostream>
using namespace std;
       
bool CheckBit( unsigned int iNo)
{
    unsigned int imask = 0xfffff7ff;  
    unsigned int iResult = 0;
    
    iResult = iNo & imask;
    return iResult;
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
        cout<<"27th bit ON\n";
    }
    else
    {
        cout<<"27'th bit OFF\n";
    }
    return 0;
}