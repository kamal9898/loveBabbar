#include<iostream>
using namespace std;

int main()
{
         int num1;
         cout<<"Enter First Number -> ";
         cin>>num1;

         int num2;
         cout<<"Enter Second Number -> ";
         cin>>num2;

         char op;
         cout<<"Enter The Operation to perform Here -> ";
         cin>>op;

         switch (op)
         {
         case '+':
            cout<<num1+num2;
                  break;
         
         case '-':
            cout<<num1-num2;
                  break;
         case '*':
            cout<<num1*num2;
                  break;
         case '%':
            cout<<num1%num2;
                  break;
         case '/':
            cout<<num1/num2;
                  break;
         
         default:

         cout<<"Enter a Operation here ";
                  break;
         }

}