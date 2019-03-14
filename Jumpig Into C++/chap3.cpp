#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main ()
{
	string name1, name2 ;
	int age1, age2 ;
	cout<<"Write the First name"<<endl;
	getline( cin , name1 , '\n' );
	cout<<"Enter Age"<<endl;
	cin>>age1;
	cout<<"Write the Second name";
	getline( cin, name2);
	//cin.get();
	//cout<<name2<<endl;
	cout<<"Enter Age"<<endl;
	cin>>age2;
	if(age1>age2)	
	{
		cout<<name1<<" is older"<<endl;
	}
	else if(age1==age2)
	{
		cout<<name1<<" and "<<name2<<" have the same age"<<endl;
	}	
	else
	{
		cout<<name2<<" is older"<<endl;
	}	
}