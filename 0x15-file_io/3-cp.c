#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

/**
 * print_error - Prints an error message and exits with the given exit code.
 * @exit_code: The exit code.
 * @format: The format string for the error message.
 * @arg: The argument for the format string.
 */
void print_error(int exit_code, const char *format, const char *arg)
{
dprintf(STDERR_FILENO, format, arg);
exit(exit_code);
}
int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t read_bytes, write_bytes;
char buffer[BUF_SIZE];
if (argc != 3)
{
print_error(97, "Usage: cp file_from file_to\n", "");
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
print_error(98, "Error: Can't read from file %s\n", argv[1]);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{
close(fd_from);
print_error(99, "Error: Can't write to %s\n", argv[2]);
}
while ((read_bytes = read(fd_from, buffer, BUF_SIZE)) > 0)
{
write_bytes = write(fd_to, buffer, read_bytes);
if (write_bytes != read_bytes)
{
close(fd_from);
close(fd_to);
print_error(99, "Error: Can't write to %s\n", argv[2]);
}
}
if (read_bytes == -1)
{
close(fd_from);
close(fd_to);
print_error(98, "Error: Can't read from file %s\n", argv[1]);
}
if (close(fd_from) == -1 || close(fd_to) == -1)
{
print_error(100, "Error: Can't close fd\n", "");
}
return (0);
}
