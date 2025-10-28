
#include<iostream>
using namespace std;
template<class T>
T Display(T ptr[],int iLenth)
{
    int icnt = 0;
    T isum=0;

    cout<<"Elements of the Array are:\n";

    for(icnt =0;icnt<iLenth;icnt++)
    {
        isum = isum + ptr[icnt];
    }
    return isum;

}
int main()
{
    int size;
    int icnt=0,iRet;
    int *Arr = new int[size];

    cout<<"Enter Number of element:\n";
    cin>>size;
    //use
    cout<<"Enter the Elements:";
    for(icnt=0;icnt<size;icnt++)
    {
        cin>>Arr[icnt];
    }
    iRet = Display(Arr,size);
    cout<<"Sum of Elemet:"<<iRet;

    delete []Arr;
    return 0;
}