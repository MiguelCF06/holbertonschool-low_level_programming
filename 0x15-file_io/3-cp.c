#include "holberton.h"
/**
 *numArg - Check if the number of arguments is the correct
 *@args: Arguments
 */
void numArg(int args)
{
	if (args != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 *existence - Check if the file doesn't exits or can't read it
 *@file: the file_to
 *@fd_from: the file that will be copy
 *@fd_to: the file that will be the copy
 *@err: Checks if the file exist or not
 */
void existence(char *file, int fd_from, int fd_to, ssize_t err)
{
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}
/**
 *notCreate - Check if the file can be create or write in it
 *@file: the file_to
 *@fd_from: the file that will be copy
 *@fd_to: the file that will be the copy
 *@err: Checks if the file can or cannot be created
 */
void notCreate(char *file, int fd_from, int fd_to, ssize_t err)
{
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}
/**
 *noClose - Check if the file descriptor can close
 *@lookClose: looks if can or cannot close
 *@fd: file descriptor
 */
void noClose(int lookClose, int fd)
{
	if (lookClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}
/**
 *main - Count the amount of arguments
 *@argc: argument count
 *@argv: Argument vector
 *Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;
	int close_from;
	int close_to;
	char *buffer[1024];
	mode_t bitPermissions;
	ssize_t lR, lW;

	bitPermissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	numArg(argc);

	fd_from = open(argv[1], O_RDONLY);
	existence(argv[1], -1, -1, (ssize_t)fd_from);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, bitPermissions);
	notCreate(argv[2], fd_from, -1, (ssize_t)fd_to);

	lR = 1024;
	while (lR == 1024)
	{
		lR = read(fd_from, buffer, 1024);
		existence(argv[1], fd_from, fd_to, lR);

		lW = write(fd_to, buffer, lR);
		if (lR != lW)
			lW = -1;
		notCreate(argv[2], fd_from, fd_to, lW);
	}
	close_from = close(fd_from);
	close_to = close(fd_to);
	noClose(close_from, fd_from);
	noClose(close_to, fd_to);
	return (0);
}
