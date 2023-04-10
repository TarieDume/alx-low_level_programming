#include "main.h"

/**
 * read_textfile -  function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: filename
 * @letters: numbers of letters printed
 * Return: the actual number of letters it could read and print
 * if it fails return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	ssize_t nrd, nwr;
	char *buf;

	nrd = read(fl, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);


	if (!filename)
		return (0);

	fl = open(filename, O_RDONLY);

	if (fl == -1)
		return (0);


	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	close(fl);

	free(buf);

	return (nwr);
}
