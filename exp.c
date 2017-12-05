#include<stdio.h>
#include<math.h>

int main()
{
  double fatt = 1., e = 1., ex, x = 1;
  int i, num;
  
  
  printf("Inserire il numero:");
  scanf("%d", &num);
  
  
  ex = exp((double)num);
  printf("%g\n", ex);
  
  
  for(i = 1; i <= 10; i++)
  {
    fatt *= i;
    x *= num;
    e += x / fatt;
  }
  
  
  printf("%f\n", e);


  return 0; 
}
