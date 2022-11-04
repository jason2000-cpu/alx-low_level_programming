#include "main.h"
/**
 * create_file - Creates a textfile
 * @filename: The name of the file to create
 * @text_content: The text to write to created file
 * Return: Returns either 1 (succcess) or -1 (fail)
 */
int create_file(const char *filename, char *text_content)
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
	fd = open(filename, O_CREAT | O_WRONLY | o_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	write(fd, text_content, i);
	return (1);
}
