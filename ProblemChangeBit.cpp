// when bit off  get number

#include<iostream>
using namespace std;
typedef unsigned int UINT;        

UINT ChangeBit(UINT iNo)
{
    UINT iMask = 4294967231;  //7th pos
    UINT iResult = 0;
    iResult = iNo & iMask;
    return iResult;
}
int main()
{
    UINT  iValue=0,iRet=0;
   
    
    cout<<"Enter Number from user:\n";
    cin>>iValue;

    iRet = ChangeBit(iValue);
    cout<<"Updated Number is:"<<iRet<<"\n";
    return 0;
}