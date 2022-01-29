#include<iostream>
using namespace std;
// printing sum for col
void printColSum(int arr[][3] , int row , int col)
{
         cout<<"Printing sum ----> "<<endl;
      for(int col  =0; col<3; col++)
      {
               int sum = 0;
               for(int row = 0; row <3; row++)
               {
                        sum += arr[row][col];
               }

               cout<<sum<<" ";
      }


}


// printing sum for row
void printSum(int arr[][3] , int row , int col)
{
         cout<<"Printing sum ----> "<<endl;
      for(int row  =0; row<3; row++)
      {
               int sum = 0;
               for(int col = 0; col <3; col++)
               {
                        sum += arr[row][col];
               }

               cout<<sum<<" ";
      }


}

int main()
{
           int arr[3][3];

           cout<<"Enter the elements "<< endl;




           
         // // taking input row wise 

         for(int i =0; i<3; i++)
         {
                  for(int j =0; j<3; j++)
                  {
                           cin>>arr[i][j];
                  }
         }





           // // printint thew array 

           cout<<"Printing the array"<<endl;




         
         for(int i =0; i<3; i++)
         {
                  for(int j =0; j<3; j++)
                  {
                           cout<<arr[i][j]<<" ";
                  }

                  cout<<endl;
         }

         //printSum(arr,3,3);
         printColSum(arr,3,3);

         cout<<endl;

}