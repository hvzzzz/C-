#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<vector>
using namespace std;
const int MAX=int(sqrt((1ll<<31)-1))+5;
vector<int>isPrime;
vector<int>primos;
bool flag;
void prime(int n)
{
	flag=0;
	if(n==1)
		flag=1;
	if(n!=2)
	{	
		if(n%2==0)
			flag=1;
		for(int i=3;i*i<=n;i+=2)
		{
			if(n%i==0)
			{	
				flag=1;
			}
		}
	}
}
void sieve()
{
	isPrime=vector<int>(MAX,1);
	isPrime[0]=isPrime[1]=0;
	for(int i=4;i<MAX;i+=2)
	{
		isPrime[i]=0;
	}
	for(int i=3;i*i<=MAX;i+=2)
	{
		if(isPrime[i]==1);
		{
			for(int j=i*i;j<MAX;j+=i)
			{
				isPrime[j]=0;
			}
		}
	}
}
int main()
{
	int count=0;
	cout<<"MAX "<<MAX<<endl;
	sieve();
	cout<<"MAX "<<MAX<<endl;
	for(int i=3;i<MAX;i+=2)
	{
		if(isPrime[i]==1)
			count=count+1;
	}
	cout<<count;	
}