/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i;

	mask <<= (sizeof(unsigned long int) * 8) - 1;

	for (i = 0; i < (int)(sizeof(unsigned long int) * 8); i++)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask >>= 1;
	}

}

