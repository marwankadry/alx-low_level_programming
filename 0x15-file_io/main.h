#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcnt1.h>
#include <sys/types.h>
#include <sys/stat.h>

#define READ_BUF_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *tex_content);

#endif
