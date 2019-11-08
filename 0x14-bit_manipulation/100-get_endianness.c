/**
 * get_endianness - Check the endianess
 *
 * Return: void
 */

int get_endianness(void)
{
	int index;

	index = 2;

	if (index & 1)
	{
		return (0);
	}

	return (1);
}
