#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *a;
	t_list *b;

	a = ft_create_elem(data);
	if (!*begin_list)
	{
		*begin_list = a;
		return ;
	}
	b = *begin_list;
	while (b->next)
		b = b->next;
	b->next = a;
}
