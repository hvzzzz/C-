#include<iostream>
#include<cstdio>
#define _USE_MATH_DEFINES
#include<cmath>
#include <iomanip> 
using namespace std;
int main()//print pi with a given number of decimal places
{
    int len;
    cin>>len;
    cout<<setprecision(len+1)<<M_PI<<endl;
}