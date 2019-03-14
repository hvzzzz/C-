#include<iostream>
#include<cstdio> 
using namespace std;
void printnum ( int begin )
{
  cout<< begin;
  if ( begin < 4 )         // The base case is when begin is greater than 9
  {                           //  for it will not recurse after the if-statement
      printnum ( begin + 1 ); 
  }
  cout<<"pass"<<endl;
  cout<< begin;         // Outputs the second begin, after the program has
                              //  gone through and output
}
int main()
{
	printnum(1);
} 