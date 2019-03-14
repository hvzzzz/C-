#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<vector>
using namespace std;
const int MAX=33000;
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
	int n=0;
	sieve();
	//prime(2);
	//cout<<flag<<endl;
	while(cin>>n)
	{	
		int count=0;
		if(n==0)
			break;
		else
		{	
			primos=vector<int>(isPrime.begin(),isPrime.end());//lo mismo que primos=isPrime
			int a=0;
			for(int i=2;i<n;i++)
			{
				if(isPrime[i]==1)
				{
					a=n-i;
					prime(a);
					//cout<<flag<<" "<<i<<endl;
					if(flag==0)//a es primo
					{
						count=count+1;
						isPrime[a]=0;
					}
				}	
			}
			isPrime=vector<int>(primos.begin(),primos.end());//lo mismo que isPrime=primos
			printf("%d\n",count);
		}
	}
}