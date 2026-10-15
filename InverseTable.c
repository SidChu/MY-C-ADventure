#include <stdio.h>
int main()
{
  float farh,celsius;
  int lower,step,upper;
  
  lower=0;
  upper=300;
  step=20;
  celsius=lower;
  
  printf("Farh to Celsius table\n");
  
  while(celsius<=upper)
   { 
      farh=(9.0/5.0)*(celsius) +32.0;
      printf("%10.0fC  %5.0fF\n",celsius,farh);
     celsius=celsius+step;
  }

}
   
   