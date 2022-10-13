#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - positivo, negativo o zero un numero generado en la ejecucion
 * Return: 0 siempre
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
else
{
printf("%i is zero\n", n);
}
return (0);
}
