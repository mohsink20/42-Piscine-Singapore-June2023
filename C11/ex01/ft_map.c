#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *a;
	int i;

	a = (int*)malloc(sizeof(int) * length);
	i = -1;
	while (++i < length)
		a[i] = f(tab[i]);
	return (a);
}
