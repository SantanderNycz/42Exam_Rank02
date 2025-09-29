#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int nbr1 = atoi(av[1]);
	int nbr2 = atoi(av[3]);

	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("%d", nbr1 + nbr2);
		if (av[2][0] == '-')
			printf("%d", nbr1 - nbr2);
		if (av[2][0] == '*')
			printf("%d", nbr1 * nbr2);
		if (av[2][0] == '/')
			printf("%d", nbr1 / nbr2);
		if (av[2][0] == '%')
			printf("%d", nbr1 % nbr2);
	}
	printf("\n");
	return 0;
}