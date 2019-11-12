#include "holberton.h"
/**
 *
 *
 *
 *
 *
 *
*/
int main(int argc, char const *argv[])
{
	char buffer[1024];
	int stateFrom, stateTo, closeFrom, closeTo;
	ssize_t count;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	stateFrom = open(argv[1], O_RDONLY);
	if (stateFrom == -1)
	{
		dprintf(STDERR_FILENO, "Usage: Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	stateTo = open(argv[2], O_CREAT | O_RDWR | O_APPEND | O_TRUNC, 0664);
	while ((count = read(stateFrom, buffer, 1024)) > 0)
	{
		count = write(stateTo, buffer, count);
		if	(count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	closeFrom = close(stateFrom);
	if (closeFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", closeFrom);
		exit(100);
	}
	closeTo = close(stateTo);
	if (closeTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", closeTo);
		exit(100);
	}
	return (0);
}
