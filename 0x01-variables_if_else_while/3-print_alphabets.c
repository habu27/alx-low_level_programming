#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)

{
char lower_ch;
char upper_ch;

for (lower_ch = 'a'; lower_ch <= 'z'; lower_ch++)
{
putchar(lower_ch);
}

for (upper_ch = 'A'; upper_ch <= 'z'; upper_ch++)
{
putchar(upper_ch);
putchar('\n');
}
return (0);

}
