#ifndef MAIN_H

#define MAIN_H



#include <stdio.h>



void positive_or_negative(int n);

int largest_number(int a, int b, int c);

int convert_day(int month, int day);

void print_remaining_days(int month, int day, int year);


trcat - function that concatenates
trcat - function that concatenates
*          two strings.
*
*          *
*
*          * @dest: pointer to destnation input
*
*          * @src: pointer to source input
*
*          *
*
*          * Return: pointer to resulting string @dest
*
*          */



char *_strcat(char *dest, char *src)

{

	int c, c2;

	c = 0;

	/*find the size of dest array*/

	while (dest[c])

		c++;

	/* iterate through each src array value without the null byte*/

	for (c2 = 0; src[c2] ; c2++)

		/*append src[c2] to dest[c] while overwritting the null byte in dest*/

		dest[c++] = src[c2];

	return (dest);

}
endif /* MAIN_H */
