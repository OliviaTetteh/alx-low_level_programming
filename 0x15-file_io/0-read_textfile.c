#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- fxn that reads text file and prints to STDOUT.
 * @filename: text file to read
 * @letters: letters to be read
 * Return: b- number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t f;
	ssize_t b;
	ssize_t c;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	c = read(f, buf, letters);
	b = write(STDOUT_FILENO, buf, c);

	free(buf);
	close(f);
	return (b);
}
