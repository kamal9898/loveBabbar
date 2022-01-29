#include<iostream>
using namespace std;

int main()
{
         int i =5;

         int *ptr = &i;

         int **ptr2 = &ptr;

         cout<< endl <<endl <<"Sab sahi chal raha hai "<<endl << endl;


//          cout<<"Printing p "<<ptr<<endl;
//       //   cout<<"address of  p "<<&ptr<<endl;

        
//          cout<<"address of  p "<<*ptr2<<endl;

         cout<<i<<endl;
         cout<<*ptr<<endl;
         cout<<**ptr2<<endl;


         cout<<&i<<endl;
         cout<<ptr<<endl;
         cout<<*ptr2<<endl<<endl;


         cout<<&ptr<<endl;
         cout<<ptr2<<endl;






}
