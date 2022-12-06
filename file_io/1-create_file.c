#include "main.h"

/**
* _strlen - check the code
*@s: is the pointer
* Return: Always 0.
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] < 0)
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
	int fd, len;
	char *buff;

	len = _strlen(text_content);

	buff = malloc(len);

	if (text_content == NULL)
	{
		text_content = "";
	}
	fd = open(filename, O_CREAT, 0600);
	if (fd == -1)
		exit(1);
	write(fd, text_content, len);
	close(fd);
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDONLY);

	read(fd, buff, len);

	close(fd);

	return (1);
}
