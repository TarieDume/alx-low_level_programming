#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: filename
 * @text_content: added content
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl;
	int letters;
	int rwr;

	if (!filename)
		return (-1);

	fl = open(filename, O_WRONLY | O_APPEND);

	if (fl == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		rwr = write(fl, text_content, letters);

		if (rwr == -1)
			return (-1);
	}

	close(fl);

	return (1);
}
