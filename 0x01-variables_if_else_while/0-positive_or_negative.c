#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 *
 *return(0): print after the command
 */
int main(void)
{
int n;
srand(time(0));
n = rnad() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else (n < 0)
printf("%d is negative\n", n);
return (0);
}
