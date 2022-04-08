#include <stdio.h>

/**
 *
 * main- Entry point
 *
 * Description: taskfour numbers
 *
 * Return: Always (Success)
 *
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
