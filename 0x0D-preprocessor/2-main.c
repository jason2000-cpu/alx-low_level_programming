#include <stdlib.h>
#include <stdio.h>

/*
 * main- Entry Level
 *
 * description: this program prints the name of the file it was compiled from
 * Return : returns 0 (Always success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
