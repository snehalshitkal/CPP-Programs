//bit off if 1 bit then off 0
//chk prog 282
#include<iostream>
using namespace std;
typedef unsigned int UINT;        

UINT ChangeBit(UINT iNo)
{
    UINT iMask = 0;  
    UINT iResult = 0;
    iMask = ~iMask;
    iResult = iNo & iMask;
    return iResult;
}
int main()
{
    UINT iValue=0,iRet=0;
    cout<<"Enter Number from user:\n";
    cin>>iValue;
   

    iRet = ChangeBit(iValue);
    cout<<"Updated Number is:"<<iRet<<"\n";
    return 0;
}