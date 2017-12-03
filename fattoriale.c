#include<stdio.h>
#include<math.h>

int main ()
{
  int num, i, fatt = 1;
  printf("Inserire il numero: ");
  scanf("%d", &num);

  for(i = num; i > 0; i--)
  {
    fatt *= i;
  }
  printf("Il fattoriale e': %d\n", fatt);
  return 0;
}
