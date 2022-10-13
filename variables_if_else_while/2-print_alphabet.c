#include<stdio.h>
/**
 * main - imprime alfabeto en lowercase
 * Return: 0 siempre
*/
int main(void)
{
char caracter = 'a';

for (caracter = 'a'; caracter <= 'z'; caracter++)
{
putchar(caracter);
putchar('\n');
}
return (0);
}
