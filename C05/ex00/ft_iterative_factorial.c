int	ft_iterative_factorial(int nb)
{
	int a;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	a = 1;
	while (nb)
		a *= (nb--);
	return (a);
}
