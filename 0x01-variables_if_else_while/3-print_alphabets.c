#include <stdio.h>

/**
 * main Entry point
 *
 * Description numbers Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 * Return: Always (Success)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
