#include "holberton.h"

/**
 * read_textfile - read a letter on a file text sended
 *
 * @filename: text file to read
 * @letters: number of letters to read
 * Return: number of characters readed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc, read_text, write_text;
	char *text;

	/*validate if filename is don't  send*/
	if (filename == NULL)
		return (0);
	/*allocate memory for buffer*/
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);
	/*open file read only*/
	file_desc = open(filename, O_RDONLY);
	/*validate if open file fail */
	if (file_desc == -1)
		return (0);

	/*read file*/
	read_text = read(file_desc, text, letters);
	/*validate if read file fail*/
	if (file_desc == -1)
		return (0);
	/*add NULL character at end*/
	/*text[letters + 1] = '\0';*/
	/*write text readed*/
	write_text = write(STDOUT_FILENO, text, letters);
	/*validate if write file fail*/
	if (write_text == -1)
		return (0);
	free(text);
	close(file_desc);
	/*return number of charcaters readed*/
	return (read_text);





}
