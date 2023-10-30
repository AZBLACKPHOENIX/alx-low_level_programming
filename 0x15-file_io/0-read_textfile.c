#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print. 
 *         If the file can not be opened or read, return 0.
 *         If filename is NULL return 0.
 *         If write fails or does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytesRead, bytesWritten;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
{
close(fd);
return (0);
}
bytesRead = read(fd, buffer, letters);
close(fd);
if (bytesRead == -1)
{
free(buffer);
return (0);
}
buffer[bytesRead] = '\0';
bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
free(buffer);
if (bytesWritten != bytesRead)
return (0);
return (bytesRead);
}
