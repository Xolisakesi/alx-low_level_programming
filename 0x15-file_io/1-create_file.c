#include "main.h"
/**
 * create_file - Creates a file with the given
 * filename and writes text content to it.
 * @filename: The name of the file to be created.
 * @text_content: The text content to write to the
 * file (can be NULL).
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
int fileDescriptor, writtenBytes, length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[length])
length++;
}

fileDescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
writtenBytes = write(fileDescriptor, text_content, length);

if (fileDescriptor == -1 || writtenBytes == -1)
return (-1);

close(fileDescriptor);
return (1);
}
