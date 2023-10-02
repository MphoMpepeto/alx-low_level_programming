#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of file
 * @filename: the name of the file
 * @text_content: a NULL terminated string to add at the end of file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_append;
	ssize_t data_add;

	if (filename == NULL)
		return (-1);

	file_append = open(filename, O_WRONLY | O_APPEND);
	if (file_append == -1)
		return (-1);

	if (text_content != NULL)
	{
		data_add = write(file_append, text_content, strlen(text_content));
		if (data_add == -1)
		{
			close(file_append);
			return (-1);
		}
	}

	close(file_append);
	return (1);
}
