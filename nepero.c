#include<stdio.h>
#include<math.h>

int main()
{
  double e = 1., fatt = 1.;
  int i;

  for(i = 1; i <= 10; i++)
  {
    fatt = fatt * i;
    e = e + 1. / fatt;
    printf("%f\n", e);
  }


    
  return 0;
}
