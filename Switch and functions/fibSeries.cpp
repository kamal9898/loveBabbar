#include<iostream>
using namespace std;

int fib(int n)
{
         int a =0;
         int b =1 ;

         for (int i = 1; i <= n-1; i++)
         {
                 int nextNum = a+b;

                 a  = b;
                 b = nextNum;
         }
         
         return a;
}

int main()
{
         int n;

         cout<<"Enter a number = ";

         cin>>n;

         int ans = fib(n);

         cout<<"ans is "<<ans;
}