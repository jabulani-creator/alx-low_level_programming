#include "main.h"

/**
 * read_textfile - Main Entry.
 *
 * Description: a function that reads a text file and prints it
 *                to POSIX standard output.
 *
 * @filename: is the file to read
 *
 * @letters: number of letters to read and print from file
 *
 * Return: 0 if it fails or actual number of letters it could
 *         read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t r, wc;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	r = read(file, buffer, letters);
	if (r == -1)
		return (0);

	wc = write(STDOUT_FILENO, buffer, r);
	if (wc == -1 || r != wc)
		return (0);

	free(buffer);

	close(file);

	return (wc);
}
