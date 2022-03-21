#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, hab, hab1;

	hab = 0;
	hab1 = 0;

	while (s[hab] != '\0')
	{
		hab++;
	}

	hab1 = hab - 1;

	for (i = 0; i < hab / 2; i++)
	{
		tmp = s[i];
		s[i] = s[hab1];
		s[hab1--] = tmp;
	}
}
