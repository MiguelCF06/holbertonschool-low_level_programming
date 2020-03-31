#include "holberton.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: is the name of the file
 *@letters: The amount of letters of the file
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t lR, lW;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	lR = read(fd, buff, letters);
	close(fd);
	if (lR == -1)
	{
		free(buff);
		return (0);
	}
	lW = write(STDOUT_FILENO, buff, lR);
	free(buff);
	if (lR != lW)
		return (0);

	return (lW);
}
