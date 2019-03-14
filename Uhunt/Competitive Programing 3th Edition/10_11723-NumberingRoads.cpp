#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	int r;
	int n;
	int ans; 
	int count=1;
	while(cin>>r>>n)
	{	
		if(r==0 && n==0)
			break;	
		if(n==0)
		{
			printf("Case %d: impossible\n",count);
			break;
		}
		if(r%n==0)
			ans=(r/n)-1	;
		else
			ans=r/n;
		if(ans>26)
			printf("Case %d: impossible\n",count);
		else
			printf("Case %d: %d\n",count,ans);
		count=count+1;
	}
}