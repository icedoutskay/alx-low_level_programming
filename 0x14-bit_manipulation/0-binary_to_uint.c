#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: A pointer to a string containing a binary number.
 *
 * Return: The converted number, or 0 if there is one or more
 *         chars in the string b that is not 0 or 1 or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1;
	int i, len = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			result += base;
		base *= 2;
	}

	return (result);
}

