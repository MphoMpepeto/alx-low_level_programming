#include "main.h"

/**
 * create_file - a function that creates a file
 * @text_content: a pointer to a null terminated string
 * @filename: e name of the file to be created
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fl, new_letters, rdwr;

	if (!filename)
		return (0);
	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fl == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (new_letters = 0; text_content[new_letters]; new_letters++)
		;
	rdwr = write(fl, text_content, new_letters);
	if (rdwr == -1)
		return (-1);
	close(fl);
	return (1);
}
