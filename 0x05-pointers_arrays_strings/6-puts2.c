#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int hab, i;

	hab = 0;

	while (str[hab] != '\0')
	{
		hab++;
	}

	for (i = 0; i < hab; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
