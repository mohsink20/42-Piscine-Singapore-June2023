#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *a;
	int *tmp;

	if (min >= max)
		return (0);
	a = (int*)malloc(sizeof(int) * ((long long)max - min));
	if (!a)
		return (0);
	tmp = a;
	while (min < max)
		*(tmp++) = min++;
	return (a);
}
