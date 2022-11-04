#include "main.h"
/**
 * read_textfile- function that reads text file and prints
 * @filename: a pointer to the filename
 * @letters: The number of letters the function should read
 * Return: the number of letters it could read and print 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, w;
	char *buf;

	buf = malloc(letters);
	if (!buf || !letters)
	{
		return (0);
	}
	fd  =  open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	w = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, w);
	if (w < 0)
		return (0);

	close(fd);
	free(buf);
	return(w);
}
