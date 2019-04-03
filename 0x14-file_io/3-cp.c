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
	int file_from, file_to, read_file, write_file, cl_f2;
	char *buffer;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (-1);
	file_from = open(av[1], O_RDONLY);
	read_file = read(file_from, buffer, 1024);
	if (file_from == -1 || read_file == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		free(buffer);
		close(file_from);
		exit(98);
	}
	file_to = open(av[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	write_file = write(file_to, buffer, read_file);
	if (file_to == -1 || write_file == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		free(buffer);
		close(file_from);
		close(file_to);
		exit(99);
	}
	close(file_from);
	cl_f2 = close(file_to);
	if (cl_f2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	free(buffer);
	return (0);
}
