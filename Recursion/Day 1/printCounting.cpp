#include<iostream>
using namespace std;


void printCounting(int n)
{ 
         //base case 
         if(n == 0)
         {
            return;
         }

         cout<<n<<endl;


        // recursive relation  // op -> 5,4,3,2,1
         printCounting(n-1);

}

void print(int n)
{ 
         //base case 
         if(n == 0)
         {
            return;
         }

        


        // recursive relation  // op -> 1,2,3,4,5
         print(n-1);

         cout<<n<<endl;

}

int main()
{
         int n;
         cin>>n;

         cout<<endl;

      printCounting(n);
      cout<<endl<<endl;
      print(n);
}