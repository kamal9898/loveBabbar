#include<iostream>
#include<queue>
using namespace std;

int main()
{
   queue<string> q;

    q.push("love");
    q.push("kamal");
    q.push("Pandey");

    cout<<"First Element "<<q.front()<<endl;

    
    q.pop();
    cout<<"First Element "<<q.front()<<endl;
    
    cout<<"Size after pop "<<q.size()<<endl;
}