#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int count_x = 0, i, j;
	char *str_x, temp_x;

	while (count_x >= 0)
	{
		if (s[count_x] == '\0')
			break;
		count_x++;
	}
	str_x = s;

	for (i = 0; i < (count_x - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp_x = *(str_x + j);
			*(str_x + j) = *(str_x + (j - 1));
			*(str_x + (j - 1)) = temp_x;
		}
	}
}

