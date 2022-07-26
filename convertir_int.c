#include "main.h"

/**
 * itos - integer to string
 * @str: char array
 * @n: number
 *
 * Return: char array
*/

void *itos(char str[], long int n)
{
	int i, temp, div, length, last;

	last = n % 10;
	i = 0;
	if (last < 0)
	{
		last *= -1;
		str[i] = '-';
		i++;
	}
	n = (n / 10);
	if (n < 0)
	{
		n *= -1;
	}

	length = 0;
	div = 1;
	temp = n;

	while (temp > 0)
	{
		length += 1;
		div *= 10;
		temp = temp / 10;
	}

	div = div / 10;
	while (div >= 1)
	{
		str[i] = ((n / div) + '0');
		n = n % div;
		div /= 10;
		i++;
	}
	str[i] = last + '0';
	return (str);
}
