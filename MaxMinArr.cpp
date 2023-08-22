#include<iostream>
using namespace std;

int Max(int Arr[], int n)
{
    int iMax = Arr[0];
    for(int i = 0; i<n; i++)
    {
        if(Arr[i]>iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
}
int Min(int Arr[], int n)
{
    int iMin = Arr[0];
    for(int i = 0; i<n; i++)
    {
        if(iMin>Arr[i])
        {
            iMin = Arr[i];
        }
    }
    return iMin;
}

int main()
{
    int iSize = 0;
    int Arr[100];
    cout<<"Enter the Size of Array:- ";
    cin>>iSize;
    cout<<"The Size of Array is:-"<<iSize;
    cout<<endl;


    cout<<"Enter the Elements\n";
    for(int i = 0 ; i< iSize; i++)
    {
        cin>>Arr[i];

    }

  

    cout<<"Maximum Element is "<<Max(Arr,iSize)<<endl;
    cout<<"Minmum Element is "<<Min(Arr,iSize)<<endl;




}