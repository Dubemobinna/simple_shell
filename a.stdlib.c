#include "main.h"

/**
 * get_len - Get the lenght of a number.
 * @n: type int number.
 * Return: Lenght of a number.
 */
int get_len(int n)
{
	unsigned int n1;
	int lenght = 1;

	if (n < 0)
	{
		lenght++;
		n1 = n * -1;
	}
	else
	{
		n1 = n;
	}
	while (n1 > 9)
	{
		lenght++;
		n1 = n1 / 10;
	}

	return (lenght);
}
/**
 * aux_itoa - function converts int to string.
 * @n: type int number
 * Return: String.
 */
char *aux_itoa(int n)
{
	unsigned int n1_x;
	int len_x = get_len(n);
	char *buf_x;

	buf_x = malloc(sizeof(char) * (len_x + 1));
	if (buf_x == 0)
		return (NULL);

	*(buf_x + len_x) = '\0';

	if (n < 0)
	{
		n1_x = n * -1;
		buf_x[0] = '-';
	}
	else
	{
		n1_x = n;
	}

	len_x--;
	do {
		*(buf_x + len_x) = (n1_x % 10) + '0';
		n1_x = n1_x / 10;
		len_x--;
	}
	while (n1_x > 0)
		;
	return (buf_x);
}

/**
 * _atoi - string to integer.
 * @s: enter a string
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int count_x = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + count_x) != '\0')
	{
		if (size > 0 && (*(s + count_x) < '0' || *(s + count_x) > '9'))
			break;

		if (*(s + count_x) == '-')
			pn *= -1;

		if ((*(s + count_x) >= '0') && (*(s + count_x) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count_x++;
	}

	for (i = count_x - size; i < count_x; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
