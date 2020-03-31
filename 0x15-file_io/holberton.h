#ifndef _HOLB_H
#define _HOLB_H
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif