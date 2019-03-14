#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	long long int test;
	long long int limit;
	int ans;
	int number;
	cin>>number;
	while(number--)
	{
		cin>>test;
		ans=((sqrt(1+8*test)-1)/2);
		cout<<ans<<endl;
	}
}