#include "holberton.h"

/**
 * create_file - create a file and add text_context
 *
 * @filename: name of the file
 * @text_content: text to add on file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, write_file, len_text;
	/*validate if filename is null*/
	if (filename == NULL)
		return (-1);
	/*calculate lenght of the string sended*/
	len_text = 0;
	while (text_content[len_text] != '\0')
		len_text++;
	/*open file*/
	file_desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	/*validate if open file fails*/
	if (file_desc == -1)
		return (-1);
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
