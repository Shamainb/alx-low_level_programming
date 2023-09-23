#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file
 * @filename: text file
 * @letters: number of letter
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t d;
	ssize_t u;
	ssize_t i;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	i = read(d, buffer, letters);
	u = write(STDOUT_FILENO, buffer, i);

	free(buffer);
	close(d);
	return (u);
}
