#include "main.h"

/**
 * exit_err - a fucntion that exits the code if it fails
 * @exit_code: name of the code being executed
 * @exit_msg: message to be displayed if code fails
 *
 */

void exit_err(int exit_code, const char *exit_msg)
{
	dprintf(STDERR_FILENO, "%s\n", exit_msg);
	exit(exit_code);
}

/**
 * main - a program that copies content of a file to another file
 * @argc: the number of arguments
 * @argv: the variable args
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	const char *file_from = argv[1], *file_to = argv[2];
	int filedes_from, filedes_to;
	ssize_t data_read, data_write;
	char buffa[BUFF_SIZE];

	if (argc != 3)
		exit_err(97, "Usage: cp file_from file_to");

	filedes_from = open(file_from, O_RDONLY);
	filedes_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (filedes_from == -1 || filedes_to == -1)
		exit_err(98, "Error: Can't read/write from/to file");

	while ((data_read = read(filedes_from, buffa, BUFF_SIZE)) > 0)
	{
		data_write = write(filedes_to, buffa, data_read);
		if (data_write == -1)
			exit_err(99, "Error: Can't write to file");
	}

	if (data_read == -1)
		exit_err(98, "Error: Can't read from file");

	if (close(filedes_from) == -1 || close(filedes_to) == -1)
		exit_err(100, "Error: Can't close file descriptor");

	return (0);
}

