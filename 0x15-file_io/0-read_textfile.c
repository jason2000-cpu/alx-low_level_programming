#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/type.h>

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

	filename = &filename;
	fd = open(filename,  O_CREAT | O_WRONLY);
       	read(filanme, buf, letters);
	if (fd == -1 || filename == NULL)
	{
		return (0);
	}
	read(filename,  buf , filename);

	close(fd);
}

