#include<iostream>

using namespace std;

int score = 14; // bad practice 


void a(int & i)
{
         char ch = 'a'; // local variable 
         cout<<score<<" in a"<<endl; 
         score++;// bad practice
    cout<<i<<endl;
}

void b(int &i)
{
         
         cout<<score<<" in b"<<endl; 

         cout<<i<<endl;

}

int main()
{
         cout<<score<<" in main"<<endl; 
         int i = 5;  // local variable 
         a(i);
         b(i);

}