#include <stdio.h>

/**
 *main - outputs the size of different data types
 *
 *Return: 0
 */
int main(void)
{
	int sc;
	int si;
	int sli;
	int slli;
	int sf;

	sc = sizeof(char);
	si = sizeof(int);
	sli = sizeof(long);
	slli = sizeof(long long);
	sf = sizeof(float);
	printf("Size of a char: %d byte(s)\n", sc);
	printf("Size of an int: %d byte(s)\n", si);
	printf("Size of a long int: %d byte(s)\n", sli);
	printf("Size of a long long int: %d bytes(s)\n", slli);
	printf("Size of a float: %d byte(s)\n", sf);
	return (0);
}
