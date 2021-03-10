#include <unistd.h>
/**
 *main - prints a quote to std err using the write command
 *
 *Return: 1
 */
int main(void)
{
	char *quote;

	quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, quote, 60);
	return (1);
}
