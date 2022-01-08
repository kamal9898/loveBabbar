#include<iostream>
using namespace std;

int findPivot(int arr[], int n)
{
         int s =0;
         int e = n-1;

         int mid = s+(e-s)/2;

         while (s < e)
         {
                  if(arr[mid] >= arr[0])
                  {
                           s = mid+1;
                  }

                  else
                  {
                           e = mid;
                  }

                  mid = s+ (e-s)/2;
         }

         return s;
         
}

int main()
{
         int arr[6] = {7,9,2,3,4};

         cout<<"Pivot is index No "<<findPivot(arr,6);

}