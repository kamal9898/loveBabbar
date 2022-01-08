#include<iostream>
using namespace std;

int numOfBits(int n )
{
         int count = 0;

         while (n!= 0)
         {
                  
         
         

         if(n &1)
         {
                  count++;
         }

         n = n>>1;

         
         }
         return count;
}
int main()
{
         int n;
         cout<<"Enter a number = "<<endl;
         cin>>n;
         int a;
         cout<<"Enter a number = "<<endl;
         cin>>a;

         int numberofBits1 = numOfBits(n);
         int numberofBits2 = numOfBits(a);

         int final = numberofBits1+numberofBits2;

         cout<<"Ans is "<<final<<endl;

        
}