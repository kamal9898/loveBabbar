#include<iostream>
using namespace std;

int main()
{
         int n;
         cout<<"Enter the amount to check here ->";
   
         cin>>n;

         int r500, r100,r50,r20,r10,r1;

         switch (1)
         {
         case 1:
         r500 = n/500;

         cout<<"500 rupees Note here ->"<<r500<<endl;

         n = (n-r500*500);
         case 2:
         r100 = n/100;

         cout<<"100 rupees Note here ->"<<r100<<endl;

         n = (n-r100*100);
                  
         case 3:
         r50 = n/50;

         cout<<"50 rupees Note here ->"<<r50<<endl;

         n = (n-r50*50);

         case 4:
         r20 = n/20;

         cout<<"20 rupees Note here ->"<<r20<<endl;

         n = (n-r20*20);

         case 5:
         r10 = n/10;

         cout<<"10 rupees Note here ->"<<r10<<endl;

         n = (n-r10*10);
   

         case 6:
         r1 = n;

         cout<<"1 rupees Note here -> "<<r1<<endl;

         
                  break;
         
         default:
                  break;
         }
}