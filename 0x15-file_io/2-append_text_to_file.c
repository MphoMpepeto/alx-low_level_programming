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
