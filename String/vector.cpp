#include<iostream>
#include<vector>
using namespace std;

int main()
{



        vector<int> v;

        

        vector<int> a(5,1);
         vector<int> last(a);

        for(int i:a)
        {
                 cout<<i<<endl;
        }cout<<endl;

        cout<<"Size ---> "<<v.capacity()<<endl;



        v.push_back(1);
        cout<<"Size ---> "<<v.capacity()<<endl;

        v.push_back(2);
        cout<<"Size ---> "<<v.capacity()<<endl;

        v.push_back(3);
        cout<<"Size ---> "<<v.capacity()<<endl;

        cout<<"Size ---> "<<v.size()<<endl;

        cout<<"Element at 2nd Index" <<v.at(2)<<endl;

        cout<<"Front"<<v.front()<<endl;

        cout<<"back"<<v.back()<<endl;


        cout<<"Before pop"<<endl;

        for(int i:v)
        {
                 cout<<i<<endl;
        }cout<<endl;

        v.pop_back();


        cout<<"After pop"<<endl;

         for(int i:v)
        {
                 cout<<i<<endl;
        }cout<<endl;


//         cout<<"Before clear size"<<v.size()<<endl;
//         v.clear();

//          cout<<"After clear size"<<v.size()<<endl;



         
}



