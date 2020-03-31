#ifndef _HOLB_H
#define _HOLB_H
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int lenContent(char *ctxt);
void numArg(int args);
void existence(char *file, int fd_from, int fd_to, ssize_t err);
void notCreate(char *file, int fd_from, int fd_to, ssize_t err);
void noClose(int lookClose, int fd);

#endif
