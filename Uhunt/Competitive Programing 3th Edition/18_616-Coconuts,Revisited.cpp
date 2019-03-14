#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		bool flag=false;
		if(n<0)
			break;
		int inde;
		int mark=n;	
		for(int i=1;i*i<n;i++)
		{
			if(n==3)	
			{	
				printf("%d coconuts, 2 people and 1 monkey\n",mark);	
				break;
			}
			int count=0;
			while(n%i==1)
			{
				n=n-(n/i)-1;
				count++;
			}
			//cout<<count<<" "<<i<<" "<<n<<endl;
			//if(mark==n)
			//{
				//flag=false;
				//cout<<"yes"<<endl;
			//}	
			if(n%i==0 && count==i)
			{
				flag=true;
				inde=i;
			}
			n=mark;
		}
		if(mark!=3)
		{
			if(flag==false)
				printf("%d coconuts, no solution\n",mark);	
			if(flag==true)
				printf("%d coconuts, %d people and 1 monkey\n",mark,inde);
		}
	}	
}
