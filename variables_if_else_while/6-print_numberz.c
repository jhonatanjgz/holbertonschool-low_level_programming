#include<stdio.h>
/**
 * main - del 0 al 9 sin printf y putchar 2 veces
 *Return: 0 siempre
 */
int main(void)
{
int numero = 0;

for (numero = 0; numero < 10; numero++)
{
putchar(numero);
if (numero == 9)
{
putchar('\n');
}
}
return (0);
}
