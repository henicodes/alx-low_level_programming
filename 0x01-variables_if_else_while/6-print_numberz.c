#include <stdio.h>

/**
 *  main - entry point
 *
 *  Description: print numbers0 to 9 on one line
 *  Return: 0
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
