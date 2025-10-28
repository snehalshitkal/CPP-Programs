//dynamioc mask multiple bit

// errors chk 287
#include<iostream>
using namespace std;
typedef unsigned int UINT;        

UINT OffBitMultple(UINT iNo, UINT ipos1 ,UINT ipos2)
{
    UINT iMask1 = 0
    UINT iMask2 = 0;
    UINT iMask = 0 
   

    iMask1 = iMask1 << (ipos1-1);
    iMask2 = iMask2 << (ipos2-1); 

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;
    iMask = iMask1 & iMask2;
    UINT iResult = 0;
    iResult = iNo & (iMask1 & iMask2);

    iResult = iNo & iMask;
    return iResult;
}
int main()
{
    UINT  iValue=0,iRet=0,iLocation1 = 0,iLocation2=0;
    cout<<"Enter Number from user:\n";
    cin>>iValue;
    cout<<"Enter first position :\n";
    cin>>iLocation1;
    cout<<"Enter second position:\n";
    cin>>iLocation2;
  
    iRet = OffBitMultple(iValue,iLocation1,iLocation2);
    cout<<"Updated Number is:"<<iRet<<"\n";
    return 0;
}