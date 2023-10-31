#include "main.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: The text file
 *@letters: number of letters to be read and printed
 *
 *Return: number of letters read and printed, or 0 if any error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t wr_letters, rd_letters;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	rd_letters = read(fd, buffer, letters);
	if (rd_letters == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	wr_letters = write(STDOUT_FILENO, buffer, rd_letters);
	if (wr_letters == -1 || wr_letters != rd_letters)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (wr_letters);
}
