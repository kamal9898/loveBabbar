#include<bits/stdc++.h>
using namespace std;


int sum(int arr[] , int n)
{
         int sum =0;

         for (int i = 0; i < n; i++)
         {
                 sum = sum +arr[i];
         }

         return sum;
         
}
int main()
{
      int n;

      cout<<"Enter a number to be sum -> "<<endl;

      cin>>n;

      int arr[n];

      for (int i = 0; i < n; i++)
      {
              cin>>arr[i];
      }

      cout<<"Sum is "<<sum(arr,n);
      


}