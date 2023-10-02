#include "main.h"
/**
 * read_textfile - Read and write text from a file.
 * @filename: Name of the file to read from.
 * @letters: Number of letters (bytes) to read and write
 * Return: Number of bytes written to STDOUT, 0 on
 * failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *text;
ssize_t file_descriptor;
ssize_t read_bytes;
ssize_t written_bytes;

file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
return (0);

text = malloc(sizeof(char) * letters);
read_bytes = read(file_descriptor, text, letters);
written_bytes = write(STDOUT_FILENO, text, read_bytes);

free(text);
close(file_descriptor);
return (written_bytes);
}

