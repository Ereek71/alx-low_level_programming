#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
void set_string(char **s, char *to);
void print_diagums(int *a, int size);
char *_strpbrk(char *s, char *accept);
char _putchar(char *c);
char *_strstr(char *haystack, char *needle);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);

#endif
