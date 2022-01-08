#include<bits/stdc++.h>

using namespace std;


int getMin(int arr[], int size)
{
         int mini = INT_MAX;
         for (int i = 0; i < size; i++)

        {

                 mini = min(mini,arr[i]);
         //       if(arr[i] < min)
         //       {
         //                min = arr[i];
         //       }
        }
        

        return mini;
}
int getMax(int arr[], int size)
{
         int maxi = INT_MIN;

        for (int i = 0; i < size; i++)
        {
                 maxi = max(maxi,arr[i]);
        }

              

        

        return maxi;
}

int main()
{
         int n;

         cin>>n;

         int num[100];

         for (int i = 0; i <n; i++)
         {
                  cin>>num[i];
         }

         cout<<"Maximum number is "<<getMax(num ,n)<<endl;
         cout<<"Minimum number is "<<getMin(num ,n);
         
}