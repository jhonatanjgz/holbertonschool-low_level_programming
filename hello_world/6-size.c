#include<stdio.h>
/**
 * main - muestra el tamaño de los datos
 * Return: 0 siempre
 */
int main(void)
{
char tamaño_char=sizeof(char);
int tamaño_int=sizeof(int);
long int tamaño_long_int=sizeof(long int);
long long int tamaño_long_long_int=sizeof(long long int);
float tamaño_float=sizeof(float); 
printf("Size of a char: %c");
 printf("Size of a int: %i");
 printf("Size of a long int: %li");
 printf("Size of a long long int: %lli");
 printf("Size of a float: %f");
return (0);
}
