#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int randi=rand();//rand number
    cout <<randi<<endl;
    cout <<randi%10<<endl;
    cout <<randi%100<<endl;
    cout <<randi%1000<<endl;
    cout <<randi%10000<<endl;
}