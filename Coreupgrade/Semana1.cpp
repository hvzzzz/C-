#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
int main()
{
	stack<int>pil;
	stack<int>lip;
	stack<int>remember;
	int n,i=0;
	bool flag=false;
	while(cin>>n)
	{
		pil.push(n);
		lip.push(n);	
		remember.push(n);	
	}
	int res [2][pil.size()]; 
	while(lip.size()!=0)//revisa para todos
	{	
		int ans=-1;
		while(pil.size()>lip.size())//revisa para cada elemento
		{
			if(pil.top()>lip.top())
			{
				flag=true;
				ans=pil.top();
			}	
			pil.pop();
		}
		if(flag==true)
		{	
			res[0][i]=lip.top();
			res[1][i]=ans;
		}	
		else
		{
			res[0][i]=lip.top();
			res[1][i]=ans;
		}	
		flag=false;
		lip.pop();
		pil=remember;	
		i++;
	}
	for(int i=remember.size()-1;i>-1;i--)
	{
		printf("%d - %d\n",res[0][i],res[1][i]);
	}	
}