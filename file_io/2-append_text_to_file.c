#include "main.h"

/**
 * _strlen - check the code
 *@s: is the pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 *append_text_to_file - to appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the content NULL
 * Return: Returns: 1 on success
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, wr = 0, len = 0;

	fd = open(filename, O_RDWR | O_APPEND);
	if (text_content == NULL)
		return (1);
	len = _strlen(text_content);

	if (filename == NULL)
		return (-1);
	if (fd == -1)
		return (-1);

	wr = write(fd, text_content, len);

	if (wr == -1)
	{
		return (-1);
		close(fd);
	}
	close(fd);
	return (1);
}
