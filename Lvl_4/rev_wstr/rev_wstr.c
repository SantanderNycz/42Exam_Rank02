#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int start;
	int end;

	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;

		while (i >= 0)
		{
			while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
				i--;
			end = i;
			while (i >= 0 && (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0'))
				i--;
			start = i + 1;
			
			if (start <= end)
			{
				j = start;
				while (j <= end)
				{
					write(1, &av[1][j], 1);
					j++;
				}
				if (i >= 0)
					write (1, " ", 1);
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}
