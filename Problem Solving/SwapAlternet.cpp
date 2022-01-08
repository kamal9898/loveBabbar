#include<iostream>
using namespace std;

void printArray(int arr[] , int n)
{
         for(int i =0; i<n; i++)
         {
                  cout<<arr[i]<<" ";
         }
         cout<<endl;
}

void swapAlternet(int arr[], int n )
{
         for (int i = 0; i <n; i +=2)
         {
                  if (i+1 < n)
                  {
                          swap(arr[i], arr[i+1]);
                  }
                  
         }
         
}

int main()
{
         int even[8] = {2,34,5,2,7,8,9,32};
         int odd[5] = {9,4,3,2,5};

         swapAlternet(even, 8);
         printArray(even , 8);
}