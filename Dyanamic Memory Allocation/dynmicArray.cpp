#include<iostream>
using namespace std;

int getSum(int *arr, int n)
{
         int sum = 0;

         for(int i =0; i <n; i++)
         {
                  sum += arr[i];
         }

         return sum;
}

int main()
 {
//          char ch = 'a';
//          cout<< sizeof(ch)<<endl;

//          char *c = &ch;

//          cout<< sizeof(c)<<endl;


               int n;
               cout<<"Take input ";
               cin>>n;

               // variable size array

               int* arr = new int[n];

               

               // taking input in array

               for(int i =0; i<n; i++)
               {
                        cin>>arr[i];
               }

               int ans = getSum(arr, n);

               cout<<"ans is "<<ans<<endl;

               return 0;
          // case -1 
               while(true)
               {
                        int i =5;  // bhyanak
               }

              // Case  2
               while(true)
               {
                        int *ptr = new int; // bhyanak
               }

}