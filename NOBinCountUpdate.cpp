#include<iostream>
using namespace std;
int DisplayBinaryCount(int iValue)
{
    int iDigit = 0,count1=0;
    cout<<"Binary conversion is :\n";
    while(iValue!=0)
    {
        iDigit = iValue%2;
        count1=count1+iDigit;
        iValue = iValue/2;
    }
    cout<<endl;
    return count1;
}
int main()
{
    int iNo=0,iRet = 0;
    cout<<"Enter Number from user:\n";
    cin>>iNo;
    iRet = DisplayBinaryCount(iNo);
    cout<<"Number of 0's:"<<iRet<<"\n";
    
    return 0;
}