#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text to a file or creates a new file.
 * @filename: Name of the file to append or create.
 * @text_content: NULL-terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, write_result, text_length = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (text_content[text_length] != '\0')
text_length++;
}
fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
if (fd == -1)
return (-1);
if (text_length > 0)
{
write_result = write(fd, text_content, text_length);
if (write_result == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
