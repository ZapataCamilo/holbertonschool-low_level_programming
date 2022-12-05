#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - To read and write it to the POSIX standard output
 * @filename: the name of the file to read and write
 * @letters: is the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed, wr;
	char *buff;

	/*read*/
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buff = malloc(letters);

	if (filename == NULL)
		return (0);

	readed = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, readed);
	close(fd);
	return (wr);
}
