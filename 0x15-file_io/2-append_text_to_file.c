#include "main.h"
/**
 * append_text_to_file - Appends text content to an
 * existing file.
 * @filename: The name of the file to which text
 * content will be appended.
 * @text_content: The text content to append to the
 * file (can be NULL).
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fileDescriptor, writtenBytes, length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[length])
length++;
}

fileDescriptor = open(filename, O_WRONLY | O_APPEND);
writtenBytes = write(fileDescriptor, text_content, length);

if (fileDescriptor == -1 || writtenBytes == -1)
return (-1);

close(fileDescriptor);
return (1);
}

