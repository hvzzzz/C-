#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<stdlib.h>
using namespace std;
int main()
{
	int time=0;
	int timech=0;
	double ans=0;
	double ansch=0;
	int speed;
	string x;
	while(getline(cin,x))
	{	
		if(x.find(" ")!=-1)
		{
			time=timech;
			timech=(x[0]*10+x[1]-int('0')*11)*3600+(x[3]*10+x [4]-int('0')*11)*60+x[6]*10+x[7]-int('0')*11;
			if(time!=0)
				ansch=ansch+(((timech-time)*speed)/(3600.0)) ;
			speed=atoi(x.substr(9).c_str());
		}	
		else
		{
			time=(x[0]*10+x[1]-int('0')*11)*3600+(x[3]*10+x[4]-int('0')*11)*60+x[6]*10+x[7]-int('0')*11;
			ans=ansch+((time-timech)*speed)/(3600.0);
			cout<<x.substr(0,8);
			printf(" %.2f km\n", ans);
		}
	}	
}



	
	
	

