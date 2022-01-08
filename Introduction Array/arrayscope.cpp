#include<iostream>

using namespace std;

void update(int arr[], int size)
{
         cout<<"inside the function - "<<endl;

         arr[0] = 1110;

         for (int i = 0; i < 3; i++)
         {
                 cout<<arr[i]<<" ";
         }
         cout<<endl;


}

int main()
{
         int arr[3] = {1,2,3};

         update(arr,3);

         cout<<"Printing in main function"<<endl;

         for (int i = 0; i < 3; i++)
         {
                 cout<<arr[i]<<" ";
         }


         cout<<endl;
         

}