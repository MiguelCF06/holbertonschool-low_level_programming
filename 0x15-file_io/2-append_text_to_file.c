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
 *append_text_to_file - append text to the end of a file.
 *@filename: is the name of the file
 *@text_content: The content of the file
 *Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		write(fd, text_content, lenContent(text_content));
	close(fd);

	return (1);
}
