int		ft_get_tab_size(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		++i;
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		size;
	char	*tmp;

	size = ft_get_tab_size(tab);
	i = 1;
	while (i++ < size)
	{
		j = 0;
		while (++j < size)
		{
			if (cmp(tab[j - 1], tab[j]) > 0)
			{
				tmp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = tmp;
			}
		}
	}
}
