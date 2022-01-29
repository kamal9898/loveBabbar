#include<iostream>
using namespace std;

int isSum(int arr[] , int size )
{
         // base case 
         if(size  == 0 )
         {
                  return 0;
         }
         if(size  == 1 )
         {
                 
                  return arr[0];
         }

         int ans =  isSum(arr+1, size-1);

         int sum = arr[0] + ans;

         return sum;

        
}

int main()
{
         int arr[5] = {3,4,5,1,6};
         int size  = 5;

         int ans = isSum(arr,size);
         cout<<"Ans is "<<ans<<endl;
}