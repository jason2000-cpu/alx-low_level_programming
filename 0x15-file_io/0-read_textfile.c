#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>

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
	int fd;
	char buf[letters+1];


	fd = open(filename,  O_CREAT | O_WRONLY);
	if (fd == -1 || filename == NULL)
	{
		return (0);
	}
	read(*filename,  buf ,letters);

	close(fd);
}

