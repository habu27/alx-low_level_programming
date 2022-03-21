#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int hab, n, i;

	hab = 0;

	while (str[hab] != '\0')
	{
		hab++;
	}

	if (hab % 2 == 0)
	{
		for (i = hab / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (hab % 2)
	{
		for (n = (hab - 1) / 2; n < hab - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
