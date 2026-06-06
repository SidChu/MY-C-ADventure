#include <stdio.h>
int main()
{
   float farh,celcius;
   int lower,upper,step;
 
   lower=0;
   upper=500;
   step=20;
    farh=lower;
printf("Coversion Table\n");
   while(farh <= upper) { 
 celcius=(5.0/9.0) * (farh-32.0);
   printf("%3.0fF  %10.2fC\n", farh, celcius);
   farh = farh + step; 
}
}
   