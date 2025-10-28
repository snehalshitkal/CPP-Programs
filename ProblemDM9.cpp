#include<iostream>
using namespace std;
typedef unsigned int UINT;        

bool CheckBit(UINT iNo,UINT iPos)
{
    UINT imask = 1;  
    UINT iResult = 0;

    imask = imask <<(iPos - 1);
    iResult = iNo & imask;

    return (iResult == imask);
}
int main()
{
    UINT iValue=0,iLocation=0;
    bool bRet = false;
    
    cout<<"Enter Number from user:\n";
    cin>>iValue;

    cout<<"Enter Number from user:\n";
    cin>>iLocation;

    bRet = CheckBit(iValue);
    if (bRet == true)
    {
        cout<<"bit is ON Location"<<"\n";
    }
    else
    {
        cout<<"bit is OFF Location"<<"\n";
    }
    return 0;
}