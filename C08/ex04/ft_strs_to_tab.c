#include <stdlib.h>
#include "ft_stock_str.h"

int					get_str_size(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

void				str_cpy(char *dst, char *src)
{
	while (*src)
		*(dst++) = *(src++);
	*dst = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *a;
	int			i;

	a = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!a)
		return (0);
	i = 0;
	while (i < ac)
	{
		a[i].size = get_str_size(av[i]);
		a[i].str = (char*)malloc(a[i].size + 1);
		a[i].copy = (char*)malloc(a[i].size + 1);
		str_cpy(a[i].str, av[i]);
		str_cpy(a[i].copy, av[i]);
		++i;
	}
	a[i].str = 0;
	return (a);
}
