#include<iostream>

using namespace std;

void ReverseArr(int Arr[], int n)
{
    int iStart = 0;
    int iEnd = n-1;

    while(iStart<=iEnd)
    {
        swap(Arr[iStart],Arr[iEnd]);
        iStart++;
        iEnd--;
    }
}

void Display(int Arr[], int n)
{

    cout<<"\n Reverse Array is "<<endl;

    for(int i = 0; i< n; i++)
    {
        cout<<Arr[i]<<" ";
    }
}


int main()
{
int iSize = 0;


cout<<"Enter the Size of Array"<<endl;
cin>>iSize;
int Arr[iSize];

cout<<endl;

cout<<"Size of Element is "<<iSize<<endl;

cout<<"Enter the Elements"<<endl;
for(int i = 0 ; i< iSize ; i++)
{
    cin>>Arr[i];
}
cout<<"Array Before Reverse is "<<endl;
for(int i = 0; i <iSize ; i++)
{
    cout<<Arr[i]<<" ";
}

ReverseArr(Arr,iSize);
Display(Arr,iSize);

}