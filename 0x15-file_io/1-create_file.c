#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to created
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 if file was created, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, i;
ssize_t bytes_written;
char *buffer;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content == NULL)
return (1);

buffer = text_content;
i = 0;
while (buffer[i] != '\0')
i++;

bytes_written = write(fd, buffer, i);
if (bytes_written == -1)
return (-1);

close(fd);
return (1);
}
