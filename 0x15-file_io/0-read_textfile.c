#include "main.h"

/**
 * read_textfile - a func that reads a file and prints it
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int text_read;
	ssize_t data_read;
	char *buff;

	if (filename == NULL)
		return (0);

	text_read = open(filename, O_RDONLY);
	if (text_read == -1)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
	{
		close(text_read);
		return (0);
	}

	data_read = read(text_read, buff, letters);
	if (data_read == -1 || data_read != write(STDOUT_FILENO, buff, data_read))
	{
		close(text_read);
		return (0);
	}

	close(text_read);
	return (data_read);
}
