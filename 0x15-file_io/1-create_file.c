#include "holberton.h"
/**
 * create_file - Create file
 * @filename: File name
 * @text_content: Test contecnt
 * Return: 1 if :) or -1 if :(
 *
*/
int create_file(const char *filename, char *text_content)
{
	int state, count = 0, write_ = 0;

	state = open(filename, O_RDWR | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
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
