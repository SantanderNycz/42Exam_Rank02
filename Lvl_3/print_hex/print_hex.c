#include <unistd.h>

int ft_atoi(char *s)
{
	int res = 0;

	while (*s)
	{
		res = res * 10 + (*s++ - 48);
	}
	return res;
}

void print_hex(int n)
{
	char *digits = "0123456789abcdef";

	if ( n >= 16)
		print_hex(n / 16);
	write (1, &digits[n % 16], 1);
}

int main (int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
}