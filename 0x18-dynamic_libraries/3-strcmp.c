#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Function which compare two strings
 * @s1: first string
 * @s2:second string
 *
 * Return: returns diff
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	diff = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
	}
	return (diff);
}
