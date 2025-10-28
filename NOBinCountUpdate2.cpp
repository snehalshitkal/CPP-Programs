#include<iostream>
using namespace std;

int main()
{
    int iValue=0;
    cout<<"Enter Number from user:\n";
    cin>>iValue;
    
    cout<<"Number in decimal format:"<<std::dec<<iValue<<"\n";
    cout<<"Number in octal format:"<<std::oct<<iValue<<"\n";
    cout<<"Number in Hexa decimal format:"<<std::hex<<iValue<<"\n";
    
    return 0;
}