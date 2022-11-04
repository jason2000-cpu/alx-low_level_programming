#include "main.h"
/**
 * append_text_to_file- appends text to a file
 * @filename: The name of the file to append to
 * @text_content: The text to write to file
 * Return: Returns either 1 (succcess) or -1 (fail)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, fd;


	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\n')
	{
		i++;
	}
	fd = open(filename,  O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	fd = write(fd, text_content, i);
	if (fd == -1)
		return (-1);
	close(fd);
	return (1);
}
