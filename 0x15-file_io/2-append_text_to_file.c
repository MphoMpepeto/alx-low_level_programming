#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: a pointer to the file
 * @text_content: a pointer to a null terminated string
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl, new_letters, rdwr;

	if (!filename)
		return (-1);
	fl = open(filename, O_WRONLY | O_APPEND);
	if (fl == -1)
		return (-1);
	if (text_content)
	{
		for (new_letters = 0; text_content[new_letters]; new_letters++)
			;
		rdwr = write(fl, text_content, new_letters);
		if (rdwr == -1)
			return (-1);
	}
	close(fl);
	return (1);
}
