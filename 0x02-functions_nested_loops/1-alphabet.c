#include "main.h"

/**
 * Description: print_alphabet task -prints the alphabet in lowercase, followed by a new line
 * Return: this program returns zero
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
