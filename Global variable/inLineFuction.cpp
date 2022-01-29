#include<iostream>

using namespace std;

// void func(int a , int b)
// {
//          a++;
//          b++;
//          cout<<a <<   b<<endl;
// }

inline int getMax(int a, int b)
{
         return (a>b) ? a :b;
}

int main()
{
         // int a = 1, b= 2;

         // func(a,b);

         int a =1 , b= 2;

         int ans = 0;

         ans = getMax(a,b);
         cout<<ans<<endl;

         a = a+3;
         b = b+3;

           ans = getMax(a,b);
           cout<<ans<<endl;


         // if(a>b)
         // {
         //          ans = a;

         // }
         // else
         // {
         //          ans = b;
         // }

         // ans = (a>b) ? a:b;
}