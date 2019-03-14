#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{ 
	int a,b,c,a1=0,b2=0,c3=0,time,x=0,y=0,z=0;
	cin>>time;
	for(int i=0;i<time;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		x=a+x;
		y=b+y;
		z=c+z;
		//a1=a;
		//b2=b;
		//c3=c;
		//time--;
		//printf("x= %d y=%d z=%d \n",x,y,z);
		//cout<<"pasa"<<endl;	
	}
	if(x==0&&y==0&&z==0)
	{
		printf("YES");
	}
	else
		printf("NO");	
	//cout<<time<<endl;
}