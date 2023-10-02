#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_create;
	ssize_t data_write;

	if (filename == NULL)
		return (-1);

	file_create = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_create == -1)
		return (-1);

	if (text_content != NULL)
	{
		data_write = write(file_create, text_content, strlen(text_content));
		if (data_write == -1)
		{
			close(file_create);
			return (-1);
		}
	}
	close(file_create);
	return (1);
}
