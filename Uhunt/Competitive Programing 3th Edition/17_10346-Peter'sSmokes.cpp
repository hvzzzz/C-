#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	int n=0, k=0, ans;
	while(cin>>n>>k)
	{
		ans=k*(n/k);
		while(n>=k)
		{
			n=(n/k)+(n%k);
			ans=ans+k*(n/k);
		}
		printf("%d\n",ans+n);
	}
}