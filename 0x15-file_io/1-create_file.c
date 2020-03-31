#include "holberton.h"
/**
 *lenContent - Looks for the length of the text_content
 *@ctxt: is the pointer to the text_content
 *Return: The length of the string
 */
int lenContent(char *ctxt)
{
	int i;

	for (i = 0; ctxt[i]; i++)
	{
		;
	}
	return (i);
}
/**
 *create_file - creates a file.
 *@filename: is the name of the file
 *@text_content: The content of the file
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int lenCtxt;

	lenCtxt = lenContent(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		write(fd, text_content, lenCtxt);
	close(fd);
	return (1);
}
