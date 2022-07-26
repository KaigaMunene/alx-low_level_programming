#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append to
 * @text_content: is the Null terminated string to append to the file
 * Return: 1 if successful, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, i;
ssize_t bytes_written;
char *buffer;

if (filename == NULL)
return (-1);

fd = open(filename, O_APPEND | O_WRONLY);
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
