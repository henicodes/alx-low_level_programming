#include <stdio.h>

/**
 * main - entry point
 *
 * Decription:prints all single digits of base 10
 * Return: 0
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
if (c != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

