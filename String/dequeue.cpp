// Doubly ended queue

#include<iostream>
#include<deque>
using namespace std;

int main()
{
         deque<int> d;

         d.push_back(1);
         d.push_front(2);
         for(int i :d)
         {
                  cout<<i<<" ";  //ans = 2 1
         }

         // d.pop_back();  // ans = 2;
   
      // d.pop_front(); // ans = 1;

         cout<<"First Element "<<d.at(1);

         cout<<"front "<<d.front()<<endl; // 2
         cout<<"back  "<<d.back()<<endl;   // 1

}