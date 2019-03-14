#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
   int a[100000];
   int n;
   cin>>n;
   int x;
   for(int l=0;l<n;l++)
   {  
      for(int i=0;i<3;i++)
         cin>>a[i];
      sort(a,a+3);          
      cout<<"Case "<<l+1<<": "<<a[1]<<endl;
   }   
}

