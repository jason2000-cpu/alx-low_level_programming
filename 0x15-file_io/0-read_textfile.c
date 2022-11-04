#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include "main.h"

/*read_textfile - Entry Level
 *
 * @filename: a pointer to the filename
 *
 * @letters: The number of letters in the filename
 *
 * Return: success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, let, w;
	char *buf;

	buf = malloc(letters);
	if (buf == NULL || filename == NULL)
	{
		return (0);
	}
	fd  =  open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return(0);
	}
	let = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, let);
	close(fd);
	return(w);
}
