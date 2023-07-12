#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*a;
	t_list	*tmp;
	int		i;

	a = 0;
	i = -1;
	while (++i < size)
	{
		tmp = a;
		a = ft_create_elem(strs[i]);
		a->next = tmp;
	}
	return (a);
}
