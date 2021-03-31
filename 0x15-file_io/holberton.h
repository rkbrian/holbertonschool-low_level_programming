#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
/**
 * read_textfile - function to read text file and print it to the POSIX stdout
 * @filename: file name
 * @letters: allowable count of letters
 * Return: length of file text or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);



#endif
