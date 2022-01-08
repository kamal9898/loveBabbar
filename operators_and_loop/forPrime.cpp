#include<iostream>
using namespace std;

int main()
{
         int n;
         cout<<"Enter the number ";
         cin>>n;

         bool prime = 1;

         for (int i = 2; i <n; i++)
         {
                if (n % i ==0)
                {
                      prime = 0;
                      break;   
                }
                
         }

         if(prime == 0)
         {
                  cout<<"Not a prime number"<<endl;

                  
         }
         

       else
         {
                  cout<<"is a  prime number"<<endl;


         }
         
}