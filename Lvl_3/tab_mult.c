#include <unistd.h>

int	ft_atoi(char *str)
{
	int i = 0, res = 0; 

	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res);
}

void	ft_putnbr(int nbr)
{
	char c;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write (1, &c, 1);
}

int main(int ac, char **av)
{
	int i = 1;

	if (ac != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	int nbr = ft_atoi(av[1]);
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(nbr);
		write(1, " = ", 3);
		ft_putnbr(i * nbr);
		write(1, "\n", 1);
		i++;
	}
}