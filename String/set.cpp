#include<iostream>
#include<set>
using namespace std;


int main()
{
     set<int> s;
     
     s.insert(1);
     s.insert(2);
     s.insert(3);
     s.insert(5);
     s.insert(4);
     s.insert(6);
     s.insert(7);
     s.insert(8);
     s.insert(9);
     s.insert(9);

    //  for(auto i:s)
    //  {
    //           cout<<i<<endl;
    //  }
     
     
     s.erase(s.begin());
     
      for(auto i:s)
     {
              cout<<i<<endl;
     }
}