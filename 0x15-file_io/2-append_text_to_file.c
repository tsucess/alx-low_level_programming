#include "main.h"

/**
 * append_text_to_file - func that appends text at the end of a file.
 * @filename: param pointer to the name of the file.
 * @text_content: string param to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, lent);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
