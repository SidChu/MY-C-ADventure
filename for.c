#include <stdio.h>
int main()
{
 int farh;
  printf("CONVERSION USING FOR LOOP\n");
  for (farh=0;farh<=300;farh=farh+20)

  printf("%3.0d %6.2f\n",farh,(5.0/9.0)*(farh-32));

}
