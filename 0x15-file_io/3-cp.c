#include "main.h"
#include <fcntl.h>

#define BUFFER_SIZE 1024
/**
 * allocateBuffer - Allocates a buffer for file operations.
 * @file: The name of the file that the buffer will be used for.
 *
 * Return: A pointer to the newly allocated buffer.
 */

char *allocateBuffer(char *file)
{
char *buf;
buf = malloc(sizeof(char) * 1024);
if (buf == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't allocate buffer for %s\n", file);
exit(99);
}
return (buf);
}
/**
 * closeDescriptor - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */

void closeDescriptor(int fd)
{
int status;
status = close(fd);
if (status == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * main - Copies contents from one file to another with error handling.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, exit codes for errors.
 */
int main(int argc, char *argv[])
{
int source, destination, readBytes, writeBytes;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp source_file destination_file\n");
exit(97);
}

buffer = allocateBuffer(argv[2]);
source = open(argv[1], O_RDONLY);
readBytes = read(source, buffer, 1024);
destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (source == -1 || readBytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

writeBytes = write(destination, buffer, readBytes);
if (destination == -1 || writeBytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

readBytes = read(source, buffer, 1024);
destination = open(argv[2], O_WRONLY | O_APPEND);

} while (readBytes > 0);

free(buffer);
closeDescriptor(source);
closeDescriptor(destination);

return (0);
}

