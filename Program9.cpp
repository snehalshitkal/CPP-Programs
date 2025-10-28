#include<iostream>
using namespace std;

int main()
{
    int size,icnt=0;
    int Ret;

    cout<<"Enter Number of element:\n";
    cin>>size

    int *Arr = new int[size];
    //use
    cout<<"Enter the Elements:";

    for(icnt=0;icnt<size;icnt++)
    {
        cin>>Arr[icnt];
    }
    cout<<"Elements of the Array are:\n";

    for(icnt =0;icnt<size;icnt++)
    {
        cout<<Arr[icnt]<<"\n";
    }

    delete [] Arr;
    return 0;
}