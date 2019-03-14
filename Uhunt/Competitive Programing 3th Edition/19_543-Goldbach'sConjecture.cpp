#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<vector>
using namespace std;
const int MAX=1000005;
vector<int>isPrime;
bool flag;
void prime(int n)
{
	flag=0;
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
void sieve()
{
	isPrime=vector<int>(MAX,1);//el ultimo parentesis llenara todo el vector de "unos"
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
	//prime(121);
	//cout<<flag<<endl;
	while(cin>>n)
	{	
		if(n==0)
			break;
		prime(n);
		if(flag==0)
			cout<<"Goldbach's conjecture is wrong"<<endl;//n es primo
		if(flag==1)	
		{
			int a=0;
			for(int i=3;i<n;i++)
			{
				if(isPrime[i]==1)
				{
					a=n-i;
					prime(a);
					//cout<<flag<<" "<<i<<endl;
					if(flag==0)
					{
						printf("%d = %d + %d\n",n,i,a);
						break;
					}
				}	
			}
			
		}
	}
}