#include "holberton.h"

/**
 * str_len - calculate lenght of string
 *
 * @str: string to calculate
 * Return: length of the string
 */

int str_len(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * append_text_to_file - write a file into append
 *
 * @filename: is the name of the file
 * @text_content: text to write
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, write_file, len_text;
	/*open file*/
	file_desc = open(filename, O_WRONLY | O_APPEND);
	/*validate if open file fails*/
	if (file_desc == -1)
		return (-1);
	/*validate if text content is null*/
	if (text_content == NULL)
	{
		close(file_desc);
		return (1);
	}
	/*write in file*/
	write_file = write(file_desc, text_content, str_len(text_content));
	close(file_desc);
	/*validate if write file fails*/
	if (write_file == -1)
		return (-1);
	/*close file and return success*/
	close(file_desc);
	return (1);
}
