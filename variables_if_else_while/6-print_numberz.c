#include<stdio.h>
/**
 * main - del 0 al 9 sin printf y putchar 2 veces
 *Return: 0 siempre
 */
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar(n + 48);
if (n == 9)
putchar('\n');
}
return (0);
}
