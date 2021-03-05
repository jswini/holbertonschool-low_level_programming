/**
 *_strspn - finds the number of matching bytes in a string segment
 *@s: string to search
 *@accept: string or char to look for
 *
 *Return: number of bytes found
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (counter);
}
