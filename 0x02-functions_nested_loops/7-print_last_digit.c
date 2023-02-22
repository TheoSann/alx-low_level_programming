#include "main.h"

/**
 * print_last_digit - Function that print last digit
 *
 * @i: functiom parameter
 *
 * Return: Always k
 */


int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	return (k);
}
