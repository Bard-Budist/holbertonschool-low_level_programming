#include "holberton.h"
/**
 * append_text_to_file -  append
 * @filename: File name
 * @text_content: Contnent
 * Return: 1 if :) -1 if :(
 *
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int state, count = 0, write_ = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	state = open(filename, O_RDWR | O_APPEND, 0664);
	if (state == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count])
			count++;
		write_ = write(state, text_content, count);
	}
	if (write_ == -1)
		return (-1);
	close(state);
	return (1);
}
