#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads the text file to be printed to STDOUT.
 * @filename: this is the text file to be read
 * @letters: refers to the number of letters in the text file
 * Return: r- where number of bytes in text file is successfuly
 * read and printed, returns -1 where failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t r;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	r = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (r);
}
