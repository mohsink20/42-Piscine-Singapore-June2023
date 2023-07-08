#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		a;
	int		i;
	int		*b;
	int		*d;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	a = max - min;
	d = (b = malloc(a * sizeof(int)));
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	*range = b;
	i = 0;
	while (i < a)
	{
		b[i] = min + i;
		i++;
	}
	return (a);
}
