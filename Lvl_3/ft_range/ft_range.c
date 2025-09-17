#include <stdlib.h>

int     *ft_range(int start, int end)
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
		res[i] = start;
		if (start < end)
			start++;
		else
			start--;
		i++;
	}
	return (res);
}
