#include<bits/stdc++.h>
using namespace std;

int largetsRowSum(int arr[3][3], int row , int cal)
{
         int maxi = INT_MIN;

         int rowIndex =-1;


            
      for(int row  =0; row<3; row++)
      {
               int sum = 0;
               for(int col = 0; col <3; col++)
               {
                        sum += arr[row][col];
               }

               if(sum > maxi)
               {
                        maxi = sum;
                        rowIndex = row;
               }
      }

      cout<<"The maximum sum is "<<maxi<<endl;
      return rowIndex;
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

         int ansIndex = largetsRowSum(arr,3,3);
         
         cout<<"Max row is at index"<<ansIndex<<endl;
        

         cout<<endl;

}