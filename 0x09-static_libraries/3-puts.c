#include "main.h"
#include <stdio.h> /* Include the <stdio.h> header before using puts*/

/**
 * _puts - Prints a string
 * @str: The string to be printed
 */
void _puts(char *str)
{
	puts(str);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
