#include<iostream>
#include<vector>


using namespace std;

int main()
{



    vector<int>v;

    cout<<"Capacity of Vector is "<<v.capacity()<<endl;

    v.push_back(1);
     cout<<"Capacity of Vector is "<<v.capacity()<<endl;
    v.push_back(2);
     cout<<"Capacity of Vector is "<<v.capacity()<<endl;
    v.push_back(3);
     cout<<"Capacity of Vector is "<<v.capacity()<<endl;

     cout<<"Size of Vector is "<<v.size()<<endl;
     cout<<v.at(2)<<endl;
     cout<<v.front()<<endl;
     cout<<v.back()<<endl;

     cout<<"Before Pop back"<<endl;
     for(int i = 0; i< v.size() ; i++)
     {
        cout<<v[i];
     }
     cout<<endl;

v.pop_back();
       for(int i = 0; i< v.size() ; i++)
     {
        cout<<v[i];;
     }





}