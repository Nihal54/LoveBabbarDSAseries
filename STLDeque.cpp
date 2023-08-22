#include<iostream>

#include<deque>
//in deque we can perform all array operations 

using namespace std;

int main()
{

    deque<int>d;

    d.push_back(1);
    d.push_front(2);
    
    for(int i = 0; i< d.size() ; i++)
    {
        cout<<d[i]<<" ";
    }

    cout<<endl;

    cout<<"After Pop operatios"<<endl;
    //d.pop_back();
     for(int i = 0; i< d.size() ; i++)
    {
        cout<<d[i]<<" ";
    }

    cout<<"\nFirst indext element is "<<d.at(1);

    cout<<"Front element of deque is "<<d.front()<<endl;
    cout<<"is element of deque empty"<<d.empty()<<endl;



    
}