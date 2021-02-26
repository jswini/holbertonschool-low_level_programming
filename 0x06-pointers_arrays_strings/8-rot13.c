/**
 *rot13 - encodes a string using rot13 encryption
 *@array: string to encode
 *
 *Return: encrypted string
 */

char *rot13(char *array)
{
	int i, j;
	char *test = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJkLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; array[i] != '\0'; i++)
	{
		for (j = 0; test[j] != '\0'; j++)
		{
			if (array[i] == test[j])
			{
				array[i] = rot13[j];
				break;
			}
		}
	}
	return (array);
}
