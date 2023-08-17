#include <unistd.h>  // Required for the write function

void _putchar(char c) {
    write(1, &c, 1); // Writes the character to standard output
}

