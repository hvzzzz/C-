#include <iostream>
#include <algorithm>    // for lower_bound, upper_bound and sort
#include <vector>       // for vector
#include <cstdio>
#include <cmath> 
using namespace std;
 
int main ()
{
    int gfg[] = {5};
     
   // vector<int> v(gfg,gfg+8);    // 5 6 7 7 6 5 5 6
 
    //sort (v.begin(), v.end());  // 0 0 0 5 5 5 7 7
 
    //vector<int>::iterator lower,upper;
    //int lower = lower_bound (v.begin(), v.end(), 6)-v.begin(); 
    //upper = upper_bound (v.begin(), v.end(), 5); 
    //cout << "upper_bound for 6 at position " <<lower<< '\n';
    //cout << "upper_bound for 6 at position " << (upper - v.begin()) << '\n';
	//bool flag=false;
	//printf("flag :%s \n",flag ?"true" : "false");
    //if(flag==1)
		//cout<<"yes"<<endl;
	int size=gfg.size();
	cout<<"power: "<<pow(10,size)<<endl;
}