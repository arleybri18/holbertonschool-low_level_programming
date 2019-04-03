#include "holberton.h"

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
	/*validate if filename is null*/
	if (filename == NULL)
		return (-1);
	/*calculate lenght of the string sended*/
	len_text = 0;
	while (text_content[len_text])
		len_text++;
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
	write_file = write(file_desc, text_content, len_text);
	/*validate if write file fails*/
	if (write_file == -1)
	{
		close(file_desc);
		return (-1);
	}
	/*close file and return success*/
	close(file_desc);
	return (1);
}
