#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;

	while (++i < n && s2[i])
	{
		s1[i] = s2[i];
	}
	s1[i] = '\0';
	return (s1);
}

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int start = 0;
	int end = 0;
	int wc = 0;
	int len = end - start;
	char **res;

	if (!str || !str[i])
		return NULL;

	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			wc++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	res = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		start = i;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		end = i;
		if (end > start)
		{
			res[j] = (char *)(sizeof(char) * (len + 1));
			ft_strncpy(res[j], &str[start], len);
			j++;
		}
	}
	res[j] = '\0';
	return (res);
}