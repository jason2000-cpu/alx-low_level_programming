#include "main.h"
/**
<<<<<<< HEAD
 * append_text_to_file - This function adds text at EOF
 * @filename: name of the file to append data to.
 * @text_content: data to append to file
 * Return: 1 if succesfull else -1 on err
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fild = 0, chk = 0, i = 0;

	if (!filename)
		return (-1);

	fild = open(filename, O_WRONLY | O_APPEND);
	if (fild < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		chk = write(fild, text_content, i);
		if (chk < 0)
		return (-1);
	}
	close(fild);
=======
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
>>>>>>> db8e878c3697afb8220fbefb977123c30ed43107
	return (1);
}
