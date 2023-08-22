#include<iostream>
#include<map>

using namespace std;



int main()
{


    map<int ,string> m;

    m[1] = "Nihal";
    m[10] = "Sumit";
    m[2]= "Aviraj";
    m[4]="Sayyad";
    m.insert({5,"Bheem"});


    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }




    


    
}

