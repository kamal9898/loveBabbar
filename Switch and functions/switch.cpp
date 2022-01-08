#include<iostream>
using namespace std;

int main()
{
         int num = 1;

         switch (2*2*num-3+(1*2))
         {
         case 1:
            cout<<"First";
                  break;
         
         case 2:
            cout<<"Second";
                  break;
         case 3:
            cout<<"third";
                  break;
         case 4:
            cout<<"Four";
                  break;
         
         default:

         cout<<"Not a number here ";
                  break;
         }

}