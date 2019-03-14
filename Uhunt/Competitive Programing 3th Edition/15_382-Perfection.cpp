#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cout<<"PERFECTION OUTPUT"<<endl;
	while(cin>>n)
	{
		int accum=0;
		if(n==0)
		{
			printf("END OF OUTPUT");
			cout<<endl;
			break;
		}
		for(int i=1;i*i<=n;i++)
		{
			if(n%i==0)
			{
				accum=accum+i;
				if((n/i)!=i)
				{	
					accum=accum+(n/i);
					
				}	
			}
		}
		accum=accum-n;
		if(accum==n)
			//printf("%d  PERFECT\n",n);
			cout<<setw(5)<<n<<"  PERFECT"<<endl;
		if(accum>n)
			//printf("%d  ABUNDANT\n",n);	
			cout<<setw(5)<<n<<"  ABUNDANT"<<endl;
		if(accum<n)
			//printf("%d  DEFICIENT\n",n);
			cout<<setw(5)<<n<<"  DEFICIENT"<<endl;	
			
	}
}