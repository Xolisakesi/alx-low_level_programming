#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
char _char;
int _int;
long int _lint;
long long int Lint;
float _float;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(_char));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(_int));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(_lint));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(Lint));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(_float));
return (0);
}
