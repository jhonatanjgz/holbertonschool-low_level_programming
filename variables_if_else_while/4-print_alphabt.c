#include<stdio.h>
/**
 * main - imprime todo menos q y e
 * Return: 0 siempre
 */
int main(void)
{
char caracter = 'a';

for (caracter = 'a'; caracter <= 'z'; caracter++)
{
if (caracter != 'e' && caracter != 'q')
{
putchar(caracter);
}
if (caracter == 'z')
{
putchar('\n');
}
}
return (0);
}
