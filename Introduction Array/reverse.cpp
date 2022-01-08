#include<bits/stdc++.h>

using namespace std;

void reverse(int arr[] , int n)
{
         int start = 0;

         int end = n-1;

         while( start <= end)
         {
                  swap(arr[start] , arr[end]);

                  start++;
                  end--;
              
         }
}
void printArray(int arr[], int n)
{
         for (int i = 0; i < n; i++)
         {
                 cout<<arr[i]<<" ";
         }

         cout<<endl;
         
}

int main()
{
         int num1[5] = {4,2,1,5,9};

         int num2[10] = {9,3,9,9,0,9,4,6,3,8};

         reverse(num1,5);
         reverse(num2,10);

         printArray(num1,5);
         printArray(num2,10);
}