#include "main.h"
/**
<<<<<<< HEAD
 * create_file - creates a file and adds permission to it
 * @filename: The name of the file to be created
 * @text_content: content to be placed in the created file
 * Return: 1 if successfull and -1 on err.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fild = 0, chk = 0, i = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fild = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fild < 0)
		return (-1);

	while (text_content[i])
		i++;
	chk = write(fild, text_content, i);
	if (chk < 0)
		return (-1);

	close(fild);
=======
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
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	fd = write(fd, text_content, i);
	if (fd == -1)
		return (-1);
	close(fd);
>>>>>>> db8e878c3697afb8220fbefb977123c30ed43107
	return (1);
}
