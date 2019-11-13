#include "holberton.h"
/**
 * main - main
 * @argc: Argumments
 * @argv: Count
 * Return: Return
 *
 *
*/
int main(int argc, char const *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_function(argv[1], argv[2]);
	return (0);
}
/**
 * cp_function - 2domain
 * @From: Argumments
 * @To: Count
 * Return: Return
 *
*/
void cp_function(char const *From, char const *To)
{
	char buffer[1024];
	int stateFrom, stateTo, closeFrom, closeTo;
	ssize_t count;

	stateFrom = open(From, O_RDONLY);
	if (stateFrom == -1)
	{
		dprintf(STDERR_FILENO, "Usage: Error: Can't read from file %s\n", From);
		exit(98);
	}
	stateTo = open(To, O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (stateTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", To);
		exit(99);
	}
	while ((count = read(stateFrom, buffer, 1024)) > 0)
	{
		count = write(stateTo, buffer, count);
		if	(count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", To);
			exit(99);
		}
	}
	closeFrom = close(stateFrom);
	if (closeFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", closeFrom);
		exit(100);
	}
	closeTo = close(stateTo);
	if (closeTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", closeTo);
		exit(100);
	}
}
