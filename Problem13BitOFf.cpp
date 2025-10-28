//bit off = if 1 bit then off 0
// Toggale bit , use XOR  probno - 284
// i/p 2523
#include<iostream>
using namespace std;
typedef unsigned int UINT;        

UINT OffBitMultple(UINT iNo)
{
    UINT iMask1 = 0, iMask2 = 0; 

    iMask1 = iMask1 << 4;
    iMask2 = iMask2 << 4; 

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    UINT iResult = 0;

    iResult = iNo & iMask1;

    iResult = iResult & iMask2;
    return iResult;
}
int main()
{
    UINT  iValue=0,iRet=0;
    cout<<"Enter Number from user:\n";
    cin>>iValue;
  
    iRet = OffBitMultple(iValue);
    cout<<"Updated Number is:"<<iRet<<"\n";
    return 0;
}