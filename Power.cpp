#include<iostream>

using namespace std;

int Power(int a, int b)
{
    int paw= 1;

    for(int i = 1; i<= b ; i++)
    {
        paw = paw* a;
        
    }

    return paw;

    

}


int main()
{
    int a,b,ans;
    cout<<"enter first number";cin>>a;
   cout<<"enter  number"; cin>>b;

    ans=Power(a,b);
    ans=Power(a,b);

    cout<<"power is "<<ans;





    return 0;
}