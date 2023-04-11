#ifndef MAIN_H
#define MAIN_H

/*
 * File: alx
 * Wriiten by Dorcas Mhuka
 * Desc: prototypes for all functions
 *      main.h for 0x15 task
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */

