#include "main.h"

/**
 * print_alphabet - prints output for task1
 * Description: print_alphabet task -prints
 * the alphabet in lowercase, followed by a new line
 * Return: this program returns zero
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
