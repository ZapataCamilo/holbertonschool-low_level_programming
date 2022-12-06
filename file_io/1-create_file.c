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
 *create_file - to create an empty
 * @filename: the name of the file
 * @text_content: the content of the file
 * Return: Returns: 1 on success
*/
int create_file(const char *filename, char *text_content)
{
	int fd = 0, len = 0, wr = 0;

	if (text_content == NULL)
	{
		return (1);
	}
	len = _strlen(text_content);
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	wr = write(fd, text_content, len);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
