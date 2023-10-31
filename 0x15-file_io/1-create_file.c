#include "main.h"
/**
 *create_file - creates a file
 *@filename: name of the created file
 *@text_content: text to be included into the file
 *
 *Return: 1 - success, 0 - fail
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length;
	ssize_t wr_letters;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length] != '\0')
			length++;
		wr_letters = write(fd, text_content, length);
		if (wr_letters == -1 || wr_letters != length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
