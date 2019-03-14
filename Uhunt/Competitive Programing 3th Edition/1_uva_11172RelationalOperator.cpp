#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
   int n;
   cin>>n;
   while(n--)
   {
      int a, b;
      cin>>a>>b;

      if(a<b)
      {
         cout<<"<"<<endl;
      }
      if(a>b)
      {
         cout<<">"<<endl;
      }
      if(a==b)
      {
         cout<<"="<<endl;
      }   
   }   
   return 0;
}

