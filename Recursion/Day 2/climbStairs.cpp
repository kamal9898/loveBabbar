#include<iostream>
using namespace std;

int climbStairs(long long  n)
{
         // base case 

         if(n < 0)
         return 0;

         if(n == 0)
         return 1;

         // int ans = climbStairs(n-1) + climbStairs(n-2);
         // return ans;

         return climbStairs(n-1) + climbStairs(n-2);
}

int main()
{
         int n; 
         cin>>n;

         cout<<climbStairs(n);
}