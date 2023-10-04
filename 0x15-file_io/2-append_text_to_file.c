#include "main.h"

/**
 * append_text_to_file - fxn that appends text at the end of a file.
 * @filename: Address to the name of the file.
 * @text_content: terminated string to add to end of the file.
 * Return: -1 for NULL and 1 for success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int h, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	h = open(filename, O_WRONLY | O_APPEND);
	b = write(h, text_content, len);

	if (h == -1 || b == -1)
		return (-1);

	close(h);

	return (1);
}
