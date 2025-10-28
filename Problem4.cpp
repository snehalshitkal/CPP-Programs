// work 32 bit use unsigned
#include<iostream>
using namespace std;
bool CheckBit(unsigned int iNo)
{
    unsigned int imask = 8;
    unsigned int iResult = 0;
    iResult = iNo & imask;
    return (iResult == imask);
}
int main()
{
    unsigned int iValue=0;
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