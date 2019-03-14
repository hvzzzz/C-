#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	int t, x, y, z,ans;
	cin>>t;
	while(t--)
	{
		scanf("%d %d %d",&x,&y,&z);
		ans=((3*x*z/(x+y))-z);
		cout<<ans<<endl;
	}
}