#include "main.h"
/**
<<<<<<< HEAD
 * read_textfile - Reads a textfile and prints the contents to the POSIX STDOUT
 * @filename: The name of the file to read from
 * @letters: The number of characters it should print to the STDOUT
 * Return: Returns the number of characters printed
=======
 * read_textfile- function that reads text file and prints
 * @filename: a pointer to the filename
 * @letters: The number of letters the function should read
 * Return: the number of letters it could read and print 0 otherwise
>>>>>>> db8e878c3697afb8220fbefb977123c30ed43107
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fild = 0, chk = 0;
	char *buffer;

<<<<<<< HEAD
	if (!filename || !letters)
		return (0);

	fild = open(filename, O_RDONLY);
	if (fild < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	chk = read(fild, buffer, letters);
	chk = write(STDOUT_FILENO, buffer, chk);
	if (chk < 0)
		return (0);

	close(fild);
	free(buffer);
	return (chk);
=======

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
>>>>>>> db8e878c3697afb8220fbefb977123c30ed43107
}
