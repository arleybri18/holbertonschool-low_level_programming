#include "holberton.h"

/**
 * main - create a file and add text_context
 *
 * @ac: number of arguments
 * @av: arguments
 * Return: 1 on success, -1 on failure
 */
int main(int ac, char **av)
{
	int file_from, file_to, read_file, write_file, cl_f1, cl_f2;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open(av[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	read_file = read(file_from, buffer, 1024);
	if (read_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	write_file = write(file_to, buffer, read_file);
	if (write_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	cl_f1 = close(file_from);
	if (cl_f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	cl_f2 = close(file_to);
	if (cl_f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
