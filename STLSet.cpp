#include<iostream>

#include<set>

using namespace std;

int main()
{


    set<int>S;

    S.insert(5);
    S.insert(1);
    S.insert(6);
    S.insert(1);
    S.insert(6);
    S.insert(1);
    S.insert(6);
    S.insert(6);
    S.insert(6  );
    S.insert(0);



    for(auto i :S)
    {
        cout<<i<<endl;
    }
  cout<<endl;

    S.erase(S.begin());
    for(auto i :S)
    {
        cout<<i<<endl;
    }
}