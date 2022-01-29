#include<iostream>
using namespace std;

int main()
{
         // pointer to int is created and pointing to some garbage value 

         // int *p;

         // cout<<*p<<endl; // isha kabhi nahi kare 



         // int *p = 0;    // segmaintation fault 

         // cout<<*p<<endl;






         // int i =5;
         // int *q =&i;
         // cout<<q<<endl;
         // cout<< *q<<endl;



         // int *p =0;
         // p = &i;
         // cout<<p<<endl;
         // cout<< *p<<endl;




        int num = 5;
        int a = num;
       cout<<"before "<<num<<endl;
        a++;
         cout<<"After "<<num<<endl;

        //cout<<num<<endl;
       // cout<<a<<endl;


     int *p = &num;
     cout<<"before "<<num<<endl;
     (*p)++;
      cout<<"After "<<num<<endl;

         
// copying a pointer

int *q =  p;

cout<<p<<" -- "<<q<<endl;
cout<< *p<<" -- "<<*q<<endl;


// important concept 

int i =3;

    int *t = &i;

    //cout<< (*t)++ <<endl;
    *t = *t+1;
    cout<< *t <<endl;

     cout<<"before  t "<<t<<endl;

     t = t+1;
     cout<<"after  t "<<t<<endl;

         
}