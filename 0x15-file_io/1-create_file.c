#include "main.h"

/**
 * create_file - fxn that creates a file.
 * @filename: name of the file to create.
 * @text_content: Address to write to the file.
 *
 * Return: 1 for success and -1 for Null.
 */

int create_file(const char *filename, char *text_content)
{
	int f, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(f, text_content, len);

	if (f == -1 || b == -1)
		return (-1);

	close(f);

	return (1);
}
