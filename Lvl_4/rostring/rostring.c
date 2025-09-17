#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int start;
	int end;

	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\n')
			i++;
		start = i;
		while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\n')
			i++;
		end = i;

		while (av[1][i])
		{
			while (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\n')
				i++;
			if (!av[1][i])
				break;
			if (i > end) //só imprime espaço antes das próximas palavras
				write (1, " ", 1);
			while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\n')
			{
				write (1, &av[1][i], 1);
				i++;
			}
		}
		// se havia mais palavras, adiciona espaço
		if (end > start)
			write (1, " ", 1);

		// imprime a primeira palavra guardada
		while (start < end)
		{
			write (1, &av[start], 1);
			start++;
		}
	}
	write (1, "\n", 1);
	return 0;
}