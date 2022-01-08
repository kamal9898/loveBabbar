#include<iostream>
#include<queue>
using namespace std;

int main()
{
         priority_queue<int> maxi; // max heap


         // min heap

         priority_queue<int,vector<int>, greater<int> > mini;

         maxi.push(1);
         maxi.push(4);
         maxi.push(5);
         maxi.push(0);
         
         cout<<"Size is "<<maxi.size()<<endl;
         int n = maxi.size();

         for(int i =0; i< n; i++)
         {
                  cout<<maxi.top()<<" ";
                  maxi.pop();
         }
         cout<<endl;
         
         
         mini.push(5);
         mini.push(1);
         mini.push(0);
         mini.push(4);
         
         cout<<"Size is "<<mini.size()<<endl;
         int m = mini.size();

         for(int i =0; i< m; i++)
         {
                  cout<<mini.top()<<" ";
                  mini.pop();
         }
         cout<<endl;


         cout<<"Khali hai kya bhai ->"<<mini.empty();
         

}