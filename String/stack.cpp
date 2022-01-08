#include<iostream>
#include<stack>
using namespace std;

int main()
{
         stack<string> s;

         s.push("love");
         s.push("kamal");
         s.push("Pandey");

         cout<<"Top Element ->"<<s.top()<<endl; // Pandey

         s.pop();
         cout<<"Top Element -> "<<s.top()<<endl; 

         cout<<"Size -> "<<s.size()<<endl;  // 2

         cout<<" Emty or not "<<s.empty()<<endl;

}