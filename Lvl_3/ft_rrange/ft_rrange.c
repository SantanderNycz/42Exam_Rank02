#include <unistd.h>

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int len;
	int *res;

	if (start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;

	res = (int *)malloc(sizeof(int) * len);
	if (!res)
		return NULL;
	
	while (i < len)
	{
		res[i] = end;
		if (end < start)
			end++;
		else
			end--;
		i++;
	}
	return (res);
}