#include<iostream>
using namespace std;

int Factorial(int p)
{
    int iFact = 1;

    for(int i = 1; i<=p; i++)
    {
        iFact = iFact*i;
    }
    return iFact;
}


int nCr(int n, int r)
{
    
    int up = Factorial(n);
    int low = Factorial(r)*Factorial(n-r);

    return up/low;

   



}

int main()
{
    int n,r;


    cout<<"Enter the Value of N";
    cin>>n;
    cout<<"Enter the Value of R";
    cin>>r;
    int iRet= nCr(n,r);


    
    cout<<"nCr is :-"<<iRet;


}