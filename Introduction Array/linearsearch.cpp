#include<bits/stdc++.h>

using namespace std;

bool search(int arr[], int n , int key)
{
         for (int  i = 0; i <n; i++)
         {
                 if(arr[i] == key)
                 {
                          return 1;
                 }
         }

         return 0;
         
}

int main()
{
         int arr[5] = {2 , -3 , -2, 1,5 };

         cout<<"Enter the element to search for "<<endl;

         int key;

         cin>>key;

         bool found = search(arr,5,key);

         if(found)
         {
                  cout<<"Key is present "<<endl;
         }
         else
         {
                  cout<<"Key is not present "<<endl;
         }


}