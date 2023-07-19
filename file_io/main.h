#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024

/* Prototypes */
void safe_close(int fd);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy_file(const char *file_from, const char *file_to);

#endif
