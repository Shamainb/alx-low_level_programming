#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: pointer to th file
 *
 * Return: 1 on success and -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, u;
	int length = 0;

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	i = open(filename, O_WRONLY | O_APPEND);
	u = write(i, text_content, length);

	if (i == -1 || u == -1)
		return (-1);
	close(i);

	return (1);
}
