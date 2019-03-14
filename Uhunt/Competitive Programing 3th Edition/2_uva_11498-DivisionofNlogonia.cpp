#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int n;
    while(1)
    {
    cin>>n;
    if(n==0)
      break;
    else    
    { int x, y;
           cin>>x>>y;
     while(n--)
     {      
           int a, b;
           cin>>a>>b;
           if(a>x and b>y) 
               cout<<"NE"<<endl; 
           if(a<x and b>y)
               cout<<"NO"<<endl;
           if(a<x and b<y)
               cout<<"SO"<<endl;
           if(a>x and b<y)
               cout<<"SE"<<endl;
           if(a==x or b==y)
               cout<<"divisa"<<endl;  
     }
    } 
    }
    return 0;
}


