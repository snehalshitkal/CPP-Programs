#include<iostream>
using namespace std;
void Display(int ptr[],int iLenth)
{
    int icnt = 0;
 cout<<"Elements of the Array are:\n";

    for(icnt =0;icnt<iLenth;icnt++)
    {
        cout<<ptr[icnt]<<"\n";
    }

}
int main()
{
    int size,icnt=0;
    int *Arr = new int[size];

    cout<<"Enter Number of element:\n";
    cin>>size;
    //use
    cout<<"Enter the Elements:";

    for(icnt=0;icnt<size;icnt++)
    {
        cin>>Arr[icnt];
    }
    Display(Arr,size);
    delete [] Arr;
    return 0;
}