#include <unistd.h>

char	*ft_itoa(int nbr)
{
	if(nbr == -2147483648)
		return ("-2147483648\0");

	int n = nbr;
	int len = 0;

	if (nbr <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	
	char *res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return NULL;
	res[len] = '\0';
	if (nbr == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (nbr < 0)
	{
		res[0] = '-';
		return (res);
	}
	while (nbr)
	{
		res[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return res;
}