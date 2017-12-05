#include<stdio.h>
#include<math.h>

int main()
{
  double e = 1., fatt = 1., e1 = 1.;
  int i = 1;
  do
  {
    e1 = e;
    fatt = fatt * i;
    i++;
    e = e + 1. / fatt;
  }while(e - e1 > 0.001);
  printf("%f",  e);

    
  return 0;
}
