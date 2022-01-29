#include<iostream>
using namespace std;

int main()
{
         // int n;
         // cin>>n;
         int row,col;
         cin>>row>>col;


         int **arr = new int *[row];

         for(int i =0; i<row; i++)
         {
                  arr[i] = new int[col];  // creation done 
         }
        

        /// taking input 

        for(int i =0; i<row; i++)
        {
                 for(int j =0; j<col; j++)
                 {
                          cin>>arr[i][j];
                 }
        }

        /// printing 

        for(int i =0; i<row; i++)
        {
                 for(int j =0; j<col; j++)
                 {
                          cout<<arr[i][j];
                 }
        }


        
         for(int i =0; i<row; i++)
         {
                  delete[] arr[i];  // releasing memory 
         }

         delete []arr;
}