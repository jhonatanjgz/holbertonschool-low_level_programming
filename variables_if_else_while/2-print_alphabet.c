#include<stdio.h>
/**
 * main - imprime alfabeto en lowercase
 * Return: 0 siempre
*/
int main(void)
{
char caracter = 'a';
for (; caracter <= 'z'; caracter++)
{
putchar(caracter);
}
return (0);
}
