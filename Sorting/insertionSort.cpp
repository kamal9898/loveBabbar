#include<iostream>
using namespace std;

void insertionSort(int arr[] ,int n )
{
         for (int i = 1; i < n; i++)
         {
                int temp = arr[i];
                int j = i-1;

                for (; j>=0; j--)
                {
                       if(arr[j] > temp)
                       {
                                arr[j+1] = arr[j];
                       }

                       else
                       {
                                break;
                       }
                }
                
                arr[j+1] = temp;
         }
         
}

void printArray(int arr[], int n)
{
         for (int  i = 0; i <n; i++)
         {
                  cout<<arr[i]<<" ";
         }

         cout<<endl;
         
}


int main()


{
         int n;
         cout<<" Enter the N numbers = ";

         cin>>n;

         int arr[n];

         cout<<"Enter The Arr number => ";

         for (int i = 0; i <n; i++)
         {
                cin>>arr[i];
         }
         

         insertionSort(arr,n);
         printArray(arr,n);
}