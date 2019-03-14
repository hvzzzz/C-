#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int n, ans;
	while(cin>>n)
	{		
		if(n==0)
			break;
		ans=(n*(n+1)*((2*n)+1))/6;
		cout<<ans<<endl;
	}	
}