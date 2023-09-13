#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>

/*Define function prototypes for different operations*/
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char c);

/* Define a typedef for a function pointer type */
typedef int (*Operation)(int, int);

#endif /* FUNCTION_POINTERS_H */
