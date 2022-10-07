#include <stdio.h>
#include <stdlib.h>

/*
 * *string_nconcat: Entry point
 *
 * @*s1: string one
 *
 * @*s2: string two
 *
 * @n: number of letters to concatenate with s1
 *
 * Return: bolean(NULL)/ concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char concat;
	char *str = malloc(concat);

	if (strlen(s2) > n)
	{
		concat = strcat(s1, s2);
	} else
	{
		concat = strcat(s1, s2, n);
	}
	if (str == NULL)
		return NULL;
	return str;
