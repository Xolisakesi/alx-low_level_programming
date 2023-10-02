#include "main.h"
/**
 * error_exit - Print an error message to standard
 * error and exit with a code.
 * @code: The exit code to be used.
 * @message: The error message to be printed.
 * Description: This function prints the provided
 * error message to standard error,
 * followed by a new line, and then exits the program
 * with the specified exit code.
 */
void error_exit(int code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the
 * command-line arguments.
 * Description: This function serves as the entry
 * point for the program.
 * It copies the content of one file to another while
 * handling errors
 * and following the specified requirements.
 * Return: 0 on success, exit codes 97-100 on various
 * error conditions.
 */
int main(int argc, char *argv[]);

int main(int argc, char *argv[])
{
int file_from, file_to;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

if (argc != 3)
error_exit(97, "Usage: cp file_from file_to");

file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
error_exit(98, "Error: Can't read from file");

file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (file_to == -1)
error_exit(99, "Error: Can't write to file");

while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(file_to, buffer, bytes_read);
if (bytes_written == -1)
error_exit(99, "Error: Can't write to file");
}

if (bytes_read == -1)
error_exit(98, "Error: Can't read from file");

if (close(file_from) == -1 || close(file_to) == -1)
error_exit(100, "Error: Can't close file descriptor");

return (0);
}

