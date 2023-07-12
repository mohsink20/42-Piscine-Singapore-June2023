#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *tmp;
	t_list *bef;
	t_list *now;

	if (!*begin_list || !(*begin_list)->next)
		return ;
	bef = *begin_list;
	now = bef->next;
	bef->next = 0;
	while (now->next)
	{
		tmp = now->next;
		now->next = bef;
		bef = now;
		now = tmp;
	}
	now->next = bef;
	*begin_list = now;
}
