#include<bits/stdc++.h>
using namespace std;

char toLowerCase(char ch)
{
         if(ch >='a' && ch <= 'z')
         {
                  return ch;

         }

         else
         {
                  char temp = ch -'A' + 'a';
                  return temp;
         }
}

// check palindrome 

bool checkPalindrome(char a[] , int n)
{
         int s =0; 
         int e = n-1;

         while (s<e)
         {
                 if(toLowerCase(a[s]) != toLowerCase(a[e]))
                 {
                          return 0;
                 }

                 else{
                          s++;
                          e--;
                 }
         }

         return 1;

         
}

// Reverse the string 

void reverseString(char name[] , int n)
{
         int s = 0;
         int e = n-1;

         while(s<e)
         {
                  swap(name[s++], name[e--]);
         }
}



//length of char 
int getlength(char name[])
{
         int count =0;

         for(int i = 0; name[i] != '\0'; i++)
         {
                  count++;
         }

          return count;
}


char getMaxOccurence(string s)
{
        int a[26] = {0};

        for(int i =0; i < s.length(); i++)
        {
                char ch = s[i];

                int num = 0;

                if(ch >='a' && ch <= 'z')
                {
                        num = ch - 'a';
                }

                else
                {
                        num = ch - 'A';
                }
                a[num]++;

        }

        int maxi = -1 , ans = 0;

        for(int i =0; i<26; i++)
        {
                if(maxi < a[i])
                ans = i;
                maxi = a[i];
        } 

        char finalAns = 'a' + ans;

        return finalAns;


}
int main()
{

//          char name[20];
//          cout<<"Enter your name"<<endl;

//          cin>>name;
        
// //         name[2] = '\0';  \\ its a null char

//          cout<<"Your name is ";
//          cout<<name <<endl;
//          int len = getlength(name);

//          cout<<"Length : "<<len<<endl;

//          reverseString(name,len);

//          cout<<"reverse String is ";
//          cout<<name <<endl;


//          cout<<"palindrome or not : "<<checkPalindrome(name , len)<<endl;
//          cout<<"Character is "<<toLowerCase('a')<<endl;
//          cout<<"Character is "<<toLowerCase('C')<<endl;

    string s;
    cin>>s;

    cout<<getMaxOccurence(s)<<endl;

         return 0;

}