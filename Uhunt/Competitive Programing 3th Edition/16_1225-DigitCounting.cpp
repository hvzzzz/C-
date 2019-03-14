#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<stdlib.h>
#include<bits/stdc++.h>
#define MAX 10010 /*esta variable es global y su valor no se puede modificar*/ 
using namespace std;
int a[MAX][10];
int maxCalculated;
void update(int number)
{
	for (int j=0;j<10;j++)
	{
		a[number][j]=a[number-1][j];
	}
	int fila=number;
	while(number!=0)
	{
		a[fila][number%10]++;
		number=number/10;
	}	
}
void build(int number)/*esta funcion nos hara acumular lo que ya tenemos hallado y no hallarlo nuevamente cada vez que nos den un numero*/
{
	for(int i=maxCalculated+1;i<=number;i++)
	{
		update(i);
	}
}
int main()
{
	int number;
	for(int j=0;j<10;j++)
	{
		a[0][j]=0;
	}
	maxCalculated=0;
	int test;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d",&number);
		if(number>maxCalculated)
		{
			build(number);
			maxCalculated=number;	
		}	
		for(int i=0;i<10;i++)
		{
			if(i<9)
				printf("%d ",a[number][i]);
			if(i==9)
				printf("%d\n",a[number][i]);
		}
	}
} 