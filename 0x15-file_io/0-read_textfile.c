#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char buffer[READ_BUF_SIZE * 8];
	ssize_t b;

	if (!filename ||  !letters)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	b = read(fp, &buffer[0], letters);
	b = write(STDOUT_FILENO, &buffer[0], b);
	close(fp);
	return (b);
}

