#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of the file to read
 * @letters: number of letters to read
 * Return: 0 if file can not be opened or read, 1 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytes_read;

if (filename == NULL)
return (-1);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (-1);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (-1);

bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
return (-1);

write(STDOUT_FILENO, buffer, bytes_read);

close(fd);
free(buffer);
return (1);
}
