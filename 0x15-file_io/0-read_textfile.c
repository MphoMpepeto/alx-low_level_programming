#include "main.h"

/**
 * read_textfile - reads a text file and print to std output
 * @letters: number of letters it should read and print
 * @filename: a pointer to the file
 *
 * Return: the number of letters it should print and read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fl;
	ssize_t reader, writer;

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fl);
		return (0);
	}
	reader = read(fl, buffer, letters);
	writer = write(STDOUT_FILENO, buffer, reader);

	free(buffer);
	close(fl);
	return (writer);
}
