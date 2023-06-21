#include "main.h"
/**
* print_sign - Check main
* @n: An input number
* Description: This function prints the sign of the number
* Return: 1 if number is positive, 0 if number is 0, or
* -1 if number is negative
*/

int print_sign(int n)
{
	int val;

	if (n > 0)
	{
		val = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		val = 0;
		_putchar('0');
	}
	else
	{
		val = -1;
		_putchar('-');
	}

	return (val);
}
