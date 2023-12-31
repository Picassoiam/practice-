#include "main.h"

/*
 * c_print - prints chars
 * @character: integer
 *
 * Return: integer
 */
int c_print (int character)
{
	_putchar((char) character);
	return (1);
}

/*
 * s_print - prints strings
 * @str: string
 *
 * Return: integer
 */
int s_print(char *str)
{
	int i = 0;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}

/*
 * p_print - prints %%
 *
 * Returns: int
 */
int p_print(void)
{
	_putchar('%');
	return (1);
}

/*
 * id_print - prints percent i and %d
 * @n: the integer to print
 *
 *
 * Returns: int
 */
void id_print(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
		m = n;
	if (m / 10)
	{
		id_print(m / 10);
	}
	_putchar(m % 10 + '0');
}

/**
 * count_int - counts num len of int
 * @n: the integer to print
 *
 *
 * Return: integer
 */
int count_int(int n)
{
	int count = 0;

	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
