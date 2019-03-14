#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		double d, v, u;
		cin>>d>>v>>u;
		double ans;
		ans=((d/u)*(u/(sqrt((pow(u,2))-(pow(v,2))))-1));
		if(v==0 || u<=v)
			printf("Case %d: can\'t determine\n",i+1);
		else
			printf("Case %d: %.3lf\n",i+1,ans);	
	}
	
}


