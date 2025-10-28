#include<iostream>
using namespace std;
void DisplayBinary(int iValue)
{
    int iDigit = 0;
    cout<<"Binary conversion is :\n";
    while(iValue!=0)
    {
        iDigit = iValue%2;
        cout<<iDigit;
        iValue = iValue/2;
    }
    cout<<endl;
}
int main()
{
    int iNo=0;
    cout<<"Enter Number from user:\n";
    cin>>iNo;
    DisplayBinary(iNo);
    
    return 0;
}