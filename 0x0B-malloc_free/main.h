#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
char *creat_array(unsigned int size, char c);
char *strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **gird, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
