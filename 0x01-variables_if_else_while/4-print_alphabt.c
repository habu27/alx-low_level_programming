#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always (success)
 */

int main(void)

{
char  ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'q')
continue;

else if(ch == 'e')
continue;

putchar(ch);
}

putchar('\n');

return (0);

}
