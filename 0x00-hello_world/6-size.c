#include<stdio.h>
/**
* main - Entry point
* Return: Always 0 (SIZE)
*/
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of double: %zu bytes\n", sizeof(doubleType));
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of long: %zu bytes\n", sizeof(longType));
return (0);
}