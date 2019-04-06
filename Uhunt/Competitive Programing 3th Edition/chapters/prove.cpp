#include <iostream>
#include<cstdio>
using namespace std;
int main () 
{
    int  var;
    int  *ptr;//es el puntero
    int  val;
    var = 3000;
    ptr = &var;//saca la direccion de ptr
    val = *ptr;//saca el valor en ptr
    cout << "Value of var :" << var << endl;
    cout << "Value of ptr :" << ptr << endl;
    cout << "Value of val :" << val << endl;
}