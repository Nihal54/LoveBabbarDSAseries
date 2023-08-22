#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main()
{



    vector<int>B;

    B.push_back(1);
    B.push_back(6);
    B.push_back(8);
    B.push_back(10);

    cout<<"Finding 6-->"<<binary_search(B.begin(),B.end(),1);

}