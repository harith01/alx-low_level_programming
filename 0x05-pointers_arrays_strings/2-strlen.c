/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: The length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
