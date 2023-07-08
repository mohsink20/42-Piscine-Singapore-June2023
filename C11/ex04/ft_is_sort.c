int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int tmp;

	i = 0;
	while (length-- > 1)
	{
		tmp = f(tab[length], tab[length - 1]);
		if (tmp == 0)
			continue;
		if (i == 0)
			i = tmp;
		else if ((i < 0 && tmp > 0) || (i > 0 && tmp < 0))
			return (0);
	}
	return (1);
}
