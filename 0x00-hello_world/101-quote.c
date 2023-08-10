#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always return 1 (sucess)
 */
int main(void)
{
write(STDERR_FILENO,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
return (1);
}
