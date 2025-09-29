size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;

	while (s[i])
	{
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;	
		}
		i++;
	}
	return (i);
}