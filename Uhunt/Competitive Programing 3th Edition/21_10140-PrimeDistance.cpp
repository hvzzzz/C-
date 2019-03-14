#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
const int MAX=int(sqrt(2147483647ll))+2;
vector<int>isPrime;
vector<int>primos;
bool flag;
bool prime(int n)
{
	if(n<MAX)
		return isPrime[n];
	if(n==1 || n%2==0 )
		return false;
	for(int i=0;i<int(primos.size());i++)
	{
		if(n%primos[i]==0)
		{	
			return false;
		}
	}
	return true;
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
	int a=0, b=0, left, right;
	sieve();
	primos.push_back(2);
	for(int i=3;i<MAX;i+=2)
	{	
		if(isPrime[i]==1)
			primos.push_back(i);
	}
	pair<int,int> min_ans,max_ans;
	while(cin>>a>>b)
	{	
		//cout<<a<<" "<<b;
		
		int count=0, mini=1000000000 ,maxi=-1;
		for(int i=a;i<=b;i++)
		{
			if(prime(i))
			{	
				if(count==0)
				{	
					left=i;
				}	
				if(count>=1)
				{
					right=i;
					if((right-left)<mini)
					{
						mini=right-left;
						min_ans=make_pair(left,right);
					}
					if((right-left)>maxi)
					{
						maxi=right-left;
						max_ans=make_pair(left,right);
					}	
					left=right;
				}				
				count++;
			}	
		}
		if(count<=1)
			printf("There are no adjacent primes.\n");
		else
			printf("%d,%d are closest, %d,%d are most distant.\n",min_ans.first,min_ans.second,max_ans.first,max_ans.second);
	}
}