#ifndef __MAIN_H__
#define __MAIN_H__
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
#endif /* __MAIN_H__ */
