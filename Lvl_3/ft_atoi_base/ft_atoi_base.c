#include <unistd.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int res = 0;
	int sig = 1;
	int digit = 0;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;

	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sig *= -1;
		str++;
	}

	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			digit = *str - '0';
		else if (*str >= 'a' && *str <= 'f')
			digit = *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'F')
			digit = *str - 'A' + 10;
		else
			break ;
		
		if (digit >= str_base)
			break ;
		res = res * str_base + digit;
		str++;
	}
	
	return (res * sig);
}