#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	int count=0, t;
	cin>>t;
	while(t--)
	{
		int n, k, p, ans;
		
		//cin>>n>>k>>p;
		scanf("%d %d %d",&n,&k,&p);
		if((k+p)>n)
		{	
			ans=(k+p)%n;
			if(ans==0)
				ans=n;
		}	
		if((k+p)<=n)
			ans=k+p;
		//if(p==n)
			//ans=k;
		count=count+1;
		printf("Case %d: %d\n",count,ans);	
			
		
	}
}