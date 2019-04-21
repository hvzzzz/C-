#include <stdio.h>
#include <time.h>

int main () {
   time_t seconds;

   seconds = time(0);
   printf("time = %ld\n", seconds);
  
}