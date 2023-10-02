#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: text to write
 *
 * Return: 1 on succes 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int O, W, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_context != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	O = open(filename, O_WRONLY | O_APPEND);
	W = write(O, text_content, length);

	if (O == -1 || W == -1)
		return (-1);

	close(o);

	return (1);
}
