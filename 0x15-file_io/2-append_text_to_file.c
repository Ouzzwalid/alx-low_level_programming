#include "main.h"
/**
 *append_text_to_file - appends text at the end of a file.
 *@filename: the filename
 *@text_content: the text to be appended to the file
 *
 *Return: 1 if success, otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t wr_letters;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		len = 0;
		while (text_content[len] != '\0')
			len++;
		wr_letters = write(fd, text_content, len);
		if (wr_letters == -1 || wr_letters != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
