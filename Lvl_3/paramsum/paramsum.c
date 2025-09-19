#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_itoa(int n)
{
	unsigned int nbr = n;
	if (nbr == 0)
	{
		ft_putchar('0');
		return;
	}
	if (nbr > 9)
		ft_itoa(nbr / 10);
	if (nbr > 0)
	{
		ft_putchar(nbr % 10 + 48);
	}
}

int main(int ac, char **av)
{
	int i = 0;
	int c = 1;

	if (ac > 1)
	{
		while (av[c])
		{
			c++;
			i++;
		}
		ft_itoa(i);
		//write (1, &i, 1);
	}
	else
		write (1, "0", 1);
	write (1, "\n", 1);
}