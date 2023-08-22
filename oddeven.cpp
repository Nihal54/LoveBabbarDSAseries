#include<iostream>
using namespace std;

int OddEven(int a)
{
    if(a&1)
    {
        return 0;
    }
    else 
    {
        return 1;
    }
}
int main()
{

    int No = 0;

    cout<<"Enter the Number "<<endl;

    cin>>No;

    int iRet = OddEven(No);

    if(iRet == 0)
    {
        cout<<"Number is Odd";
    }
    else
    {
        cout<<"Number is Even;";
    }


}