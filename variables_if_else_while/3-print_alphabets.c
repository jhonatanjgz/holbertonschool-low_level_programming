#include<stdio.h>
/**
 * main - alfabeto minuscula, mayuscula y salto de linea
 * Return: 0 siempre
 */
int main(void)
{
char caracter = 'a';
char mcaracter = 'A';

for (caracter = 'a'; caracter <= 'z'; caracter++)
putchar(caracter);
for (mcaracter = 'A'; mcaracter <= 'Z'; mcaracter++)
putchar(mcaracter);
if (mcaracter == 'Z')
putchar('\n');
return (0);
}
