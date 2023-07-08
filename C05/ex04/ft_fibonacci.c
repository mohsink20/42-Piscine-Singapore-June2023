int	cal(int n, int a, int b)
{
	if (n == 0)
		return (a);
	if (n == 1)
		return (b);
	return (cal(n - 1, b, a + b));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (cal(index, 0, 1));
}
