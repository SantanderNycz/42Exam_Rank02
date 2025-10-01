#include <unistd.h>

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int len;
	int *res;

	if (start <= end)
		len = end - start;
	else
		len = start - end;

	res = (int *)malloc(sizeof(int) * (len + 1));
	if (!res)
		return NULL;
	
	if (end > start)
	{
		while (end >= start)
		{
			res[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while (end <= start)
		{
			res[i] = end;
			end++;
			i++;
		}
	}
	return (res);
}