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

void ft_putnbr(int n)
{
	char digit;

	if (n >= 10)
		ft_putnbr(n / 10);
	digit = n % 10 + 48;
	write (1, &digit, 1);
}

int is_prime(int nbr)
{
	int i = 2;

	if (num <= 1)
		return 0;
	while ((i * i) <= nbr)
	{
		if (nbr % i == 0)
			return 0;
		i++;
	}
	return (i);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int nbr = ft_atoi(av[1]);
		int sum = 0;

		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		ft_putnbr(sum);
	}
	write (1, "\n", 1);
	return 0;
}