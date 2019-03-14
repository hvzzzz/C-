#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<vector>
using namespace std;
const int MAX=1500;
vector<int> isPrime;
vector<int> primos;
void sieve()
{
	isPrime=vector<int>(MAX,1);
	isPrime[0]=0;
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
	int n, index,counting=0;
	sieve();
	//cout<<isPrime[0]<<endl;
	primos.push_back(1);
	primos.push_back(2);
	for(int i=3;i<MAX;i+=2)
	{
		if(isPrime[i]==1)
			primos.push_back(i);
	}
	while(cin>>n>>index)
	{	
		int count=0,compare;
		for(int i=1;i<=n;i++)
		{
			if(isPrime[i]==1)
				count++;
		}	
		//cout<<index<<" "<<count<<endl;
		if(count%2==0)
			compare=2*index;
		else
			compare=(2*index)-1;
		if(compare>count)
		{		
			if(counting>0)
				printf("\n\n");
			//cout<<"entra"<<endl;
			printf("%d %d:",n, index);
			for (int i=0;i<count;i++)
			{
				cout<<" "<<primos[i];
			}
		//	if(counting==0)
		//		printf("\n");
		}
		
		else
		{	
			if(count%2==0)
			{
				if(counting>0)
					printf("\n\n");
				printf("%d %d:",n, index);
				for(int j=((count/2)-index);j<=((count/2)+(index-1));j++)
				{
					cout<<" "<<primos[j];
				}
		//		if(counting==0)
		//			printf("\n");
			}	
			if(count%2!=0)
			{
				if(counting>0)
					printf("\n\n");
				printf("%d %d:",n, index);
				for(int k=(((count-1)/2))-(index-1);k<=(((count-1)/2))+(index-1);k++)
				{
					cout<<" "<<primos[k];
				}
		//		if(counting==0)
		//			printf("\n");
			}	
		}
		counting++;
	}
	printf("\n\n");
}