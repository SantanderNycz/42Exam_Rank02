#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nbr)
{
	int n = nbr;
	int len = 0;
	char *res;
	
	if (nbr == 2147483648)
		return ("2147483648\0");

	if (nbr <= 0)
		len++;
	
	while (n)
	{
		n = n / 10;
		len++;
	}
	res = (char *)malloc(sizeof(char) * (len + 1));

	if (!res)
		return NULL;
	res[len] = '\0';

	if (nbr == 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}

	while (nbr)
	{
		res[--len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return res;
}