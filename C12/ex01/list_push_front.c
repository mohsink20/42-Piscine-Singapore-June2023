#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *a;

	a = ft_create_elem(data);
	a->next = *begin_list;
	*begin_list = a;
}
