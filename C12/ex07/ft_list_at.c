#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	i = 0;
	while (i < nbr)
	{
		if (!begin_list)
			return (0);
		begin_list = begin_list->next;
		++i;
	}
	return (begin_list);
}
