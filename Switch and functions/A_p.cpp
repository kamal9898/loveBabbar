#include<iostream>
using namespace std;


int isAp(int n)
{
         int ans = 3*n+7;

         return ans;
}

int main()
{
         int n;
         cout<<"Enter a number = "<<endl;

         cin>>n;

         cout<<"ANs is "<<isAp(n);
}