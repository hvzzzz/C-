#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	int t, a[20], n, count=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}	
		count=count+1;
		printf("Case %d: %d\n",count,a[((n+1)/2)-1]);
	}
}