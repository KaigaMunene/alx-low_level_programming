#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes of memory
 * @file: name of the file buffer is storing chars for
 *
 * Return: pointer to the allocated memory or NULL on failure
 */
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: malloc Can't write to %s\n, file");
exit(99);
}
return (buffer);
}

/**
 * close_file - closes the file descriptor
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
int c;
c = close(fd);

if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - Copies the contents of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on success
 *
 * Description: If the argument count is incorrect - exit code 97
 * If file_from does not exist or cannot be read - exit code 98
 * If file_to cannot be created or written to - exit code 99
 * If file_to or filr_from cannot be closed - exit code 100
 *
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, r, w;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = create_buffer(argv[2]);
fd_from = open(argv[1], O_RDONLY);
r = read(fd_from, buffer, 1024);
fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (fd_from == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
w = write(fd_to, buffer, r);
if (fd_to == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
free(buffer);
exit(99);
}
r = read(fd_from, buffer, 1024);
fd_to = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);

free(buffer);
close_file(fd_from);
close_file(fd_to);

return (0);
}
