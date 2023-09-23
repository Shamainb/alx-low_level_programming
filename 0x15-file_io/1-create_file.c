#include "main.h"

/**
 * create_file - Create a function that creates a file
 * @filename:  name of the file
 * @text_content: pointer to a string
 *
 * Return: 1 on success or -1
 */
int create_file(const char *filename, char *text_content)
{
	int d, u;
	int length = 0;

	return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	u = write(d, text_content, length);

	if (d  == -1 || u == -1)
		return (-1);
	close(d);

	return (1);
}
