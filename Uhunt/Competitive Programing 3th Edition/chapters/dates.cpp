#include <stdio.h>      /* printf, scanf */
#include<iostream>
#include <time.h>       /* time_t, struct tm, time, mktime*/ 
#include <string>
using namespace std;
int main ()
{
    time_t fechalocal;
    struct tm * info_time;
    int year=2019, month=4 ,day;
    const char * weekday[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
  /* prompt user for date */
    //printf ("Enter year: "); scanf ("%d",&year);
    //printf ("Enter month: "); scanf ("%d",&month);
    printf ("Enter day: "); scanf ("%d",&day);
  /* get current timeinfo and modify it to the user's choice */
    time ( &fechalocal );
    info_time = localtime ( &fechalocal );
    info_time->tm_year = year - 1900;
    info_time->tm_mon = month - 1;
    info_time->tm_mday = day;
  /* call mktime: timeinfo->tm_wday will be set */
    mktime ( info_time );
    cout<<weekday[(*info_time).tm_wday]<<endl;
    //printf ("That day is a %s.\n", weekday[info_time->tm_wday]);
}
//this was a little boring but I did it anyway