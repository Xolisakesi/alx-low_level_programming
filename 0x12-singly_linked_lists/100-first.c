#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * first - Constructor function executed before the main function.
 * This function is executed automatically before the main function
 * and prints a poetic sentence to the standard output.
 */
void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
