//bit off = if 1 bit then off 0
// Toggale bit , use XOR 
#include<iostream>
using namespace std;
typedef unsigned int UINT;        

UINT ToggleBit(UINT iNo,UINT ipos)
{
    UINT iMask = 0;  
    UINT iResult = 0;

    iMask = iMask <<(ipos-1);
    iResult = iNo ^ iMask;
    return iResult;
}
int main()
{
    UINT  iValue=0,iRet=0,iLocation =0;
    cout<<"Enter Number from user:\n";
    cin>>iValue;
    cout<<"Enter position:\n";
    cin>>iLocation;

    iRet = ToggleBit(iValue,iLocation);
    cout<<"Updated Number is:"<<iRet<<"\n";
    return 0;
}