#include <stdlib.h>

typedef struct	s_list
{
	int	data;
	struct s_list *next;

}	t_list;

void ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int asc(int a, int b)
{
	return (a <= b);
}

int desc(int a, int b)
{
	return (a >= b);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *lst_start;
	int tmp;

	if (!lst)
		return NULL;

	lst_start = lst;
	while (lst->next)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			ft_swap(&lst->data, &lst->next->data);
			lst = lst_start;
		}
		else
			lst = lst->next;
	}
	lst = lst_start;
	return (lst);
}