#include "main.h"

/**
 * read_textfile - Reads a text file and prints
 * its contents to standard output.
 *
 * @filename: pointer to a null-terminated string
 * containing the name of the file to be read.
 *
 * @letters: The maximum number of bytes to be read from the file.
 *
 * Return: If true returns
 * the number of bytes read from the file and printed to
 * the standard output. If an error occurs, it returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wrt;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	opn = open(filename, O_RDONLY)
	rd =  read(opn, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, rd);

	if (opn == -1 || rd == -1 || wrt == -1 || rd != wrt)
	{
		free(buffer);
		return (0);

	}
	free(buffer);
	close(opn);
	return (wrt);

}
