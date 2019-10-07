/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer to pointer to a char
 *
 * @to: the address to match
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
