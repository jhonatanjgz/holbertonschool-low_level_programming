#include<stdio.h>
/**
 * main - muestra el tamaño de los datos
 * Return: 0 siempre
 */
int main(void)
{
char size_char = sizeof(char);
int size_int = sizeof(int);
long int size_long_int = sizeof(long int);
long long int size_long_long_int = sizeof(long long int);
float size_float = sizeof(float);
printf("Size of a char: %c byte(s)\n", size_float);
printf("Size of an int: %i byte(s)\n", size_int);
printf("Size of a long int: %li byte(s)\n", size_long_int);
printf("Size of a long long int: %lli byte(s)\n", size_long_long_int);
printf("Size of a float: %1.0f byte(s)\n", size_float);
return (0);
}
