#include<stdio.h>
/**
 * main - del 0 al 9 sin printf y putchar 2 veces
 *Return: 0 siempre
 */
int main(void)
{
  int n = '0';

  for (n = '0'; n <= '9'; n++)
    putchar(n);
  return (0);
}
