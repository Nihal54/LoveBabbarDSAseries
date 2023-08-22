#include<iostream>

using namespace std;
int Unique(int Arr[],int n)
{
    int ans = 0;
    for(int i  =0 ; i<n; i++)
    {
       
        
            ans= ans^Arr[i];

        

        
    }
    return ans ;
}


int main()
{

    int Arr[] ={2,3,1,6,3,6,2} ;

    cout<<"Unique element is "<<Unique(Arr,7);
}