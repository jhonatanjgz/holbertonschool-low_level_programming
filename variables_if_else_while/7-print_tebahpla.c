#include<stdio.h>
/**
 * main - alfabeto al reves
 * Return: 0 siempre
 */
int main(void)
{
  int caracter;

  for (caracter = 'z'; caracter >= 'a'; caracter--)
    putchar(caracter);
  putchar('\n');
  return (0);
}
