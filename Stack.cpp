#include<iostream>
#include<stack>

using namespace std;


int main()
{
    stack<string>s;

    s.push("Nihal");
    s.push("Juber");
    s.push("Sayyad"); 

    cout<<"Top element is--> "<<s.top()<<endl; 

    s.pop();
      cout<<"Top element is--> "<<s.top()<<endl;

      cout<<"Size of stack is "<<s.size()<<endl;

      cout<<"Is empty? "<<s.empty()<<endl;


     
}