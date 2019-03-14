#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<vector>
using namespace std;
const int MAX=18500005;
vector<int> isPrime;
vector<int> primos;
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
		if(isPrime[i]==1)
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
	int left=0,right=0,count=0;
	sieve();
	primos.push_back(2);
	for(int i=3;i<MAX;i+=2)
	{
		if(isPrime[i]==1)
		{		
			primos.push_back(i);
		
		}
	}
	//cout<<primos[100]<<" "<<primos[101]<<endl;
	vector< pair<int,int> > pares;
	for(int i=0;i<int(primos.size());i++)
	{
		if(count==0)
			left=primos[i];
		if(count>=1)
		{
			right=primos[i];
			if(right-left==2)
			{
				
				pares.push_back(make_pair(left,right));
			}
			left=right;
			
		}
		count++;	
	}
	//cout<<pares.size()<<endl;
	int n;
	while(cin>>n)
	{
		printf("(%d, %d)\n", pares[n-1].first, pares[n-1].second);
	}
	
}