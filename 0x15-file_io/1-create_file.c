#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: filename
 * @text_content: content written in the file
 * Return: 1 on success or -1 if it fails
 */

int create_file(const char *filename, char *text_content)

{
	int fl;
	int letters;
	int rwr;

	if (!filename)
		return (-1);

	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fl == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	rwr = write(fl, text_content, letters);

	if (rwr == -1)
		return (-1);

	close(fl);

	return (1);
}
