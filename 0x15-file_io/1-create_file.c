#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - Creates a file and writes text content into it
 * @filename: Pointer to the name of the file to be created
 * @text_content: Pointer to the content to be written into the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, write_status, close_status;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
write_status = write(fd, text_content, strlen(text_content));
if (write_status == -1)
{
close(fd);
return (-1);
}
}
close_status = close(fd);
if (close_status == -1)
return (-1);
return (1);
}
