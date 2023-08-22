#include<iostream>

using namespace std;

int main()
{


    int n = 0;
  

    cout<<"Enter the Value";
    cin>>n;

    bool isprime = 1;
    

    for(int i = 2; i < n; i++)
    {

        if(n%i==0)
        {

            //cout<<"It is a not prime number "<<endl;
            isprime=0;
            break;
            
        }
       
        
    }
     if(isprime==0)
        {
             cout<<"It is a not prime number "<<endl;
            

        }
        else
        {

            cout<<"It is  Prime Number"<<endl;

        }
    return 0;
}