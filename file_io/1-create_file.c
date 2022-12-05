#include "main.h"

int _strlen(char *s)
{
	int i = 0;

	while (s[i] < 0)
		i++;
	return (i);
}
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len;
	char *buff;
	len = _strlen(text_content);
	buff = malloc(len);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY, 6000);
	}

	if (fd == -1)
		exit (1);

	if (filename == NULL)
		return (-1);

	wr = write(fd, text_content, len);

	close(fd);

	fd = open(filename, O_RDONLY);

	read(fd, buff, len);

	close(fd);

	return (wr);
}