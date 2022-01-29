#include<iostream>
using namespace std;

void update(int **p2)
{
        // p2= p2+1;
         // kuch change hoga ??

         //-
         *p2= *p2+1;
         // *ptr change hoga -> yes ??


        **p2= **p2+1;
         // kuch change hoga ??
}

int main()
{
         int i =5;
         int *ptr = &i;
         int **ptr2 = &ptr;

         cout<<endl<<endl;

          cout<<"before -> "<<i<<endl;
         cout<<"before -> "<<ptr<<endl;
         cout<<"before -> "<<ptr2<<endl;

         update(ptr2);
          cout<<"After -> "<<i<<endl;
         cout<<"After -> "<<ptr<<endl;
         cout<<"After -> "<<ptr2<<endl;



}