#include<iostream>
using namespace std;

int main()
{
    int size,icnt;
    int Ret;

    cout<<"Enter Number of element:\n";
    cin>>size

    //int Arr[] = new int[size];                  //Same as dynamic 
    int *ptr = new int[size];
    //use
   

    delete [] ptr;
    return 0;
}