#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - categorizar en positivo, negatio o zero un numero generado en la ejecucion
 * Return: 0 siempre
 */

int main(void)
{
  int n;
  
  srand(time(0));
  n = rand() - RAND_MAX / 2;

  if (n > 0)
   {
     printf("%i es positivo", n);
   }
  else if (n < 0)
   {
     printf("%i es negativo", n);
   }
  else
   {
     printf("%i es cero", n);
   }
  return (0);
}
