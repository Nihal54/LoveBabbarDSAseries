#include<iostream>
using namespace std;

void Reverse(int Arr[], int n)
{
    int start = 0;
    int end = n-1;

    while(end>=start)
    {
        swap(Arr[start],Arr[end]);
        end--;
        start++;

    }
}

void Print(int Arr[], int n)
{
    for(int i = 0; i< n; i++)
    {
        cout<<Arr[i]<<"  ";
    }
    cout<<endl;
}

int main()
{
    int Arr[] = {1,2,3,4,5};
    int Brr[] = {11,22,33,44};


    Reverse(Arr,5);
    Print(Arr,5);
    Reverse(Brr,4);
     Print(Brr,4);

}