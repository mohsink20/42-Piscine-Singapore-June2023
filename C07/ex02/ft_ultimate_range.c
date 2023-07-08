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
/*
#include <stdio.h>

int main(void)
{
	int *range;
	int min = 1;
	int max = 6;

	int size = ft_ultimate_range(&range, min, max);

	if (size == -1)
	{
		printf("Error: Unable to create range.\n");
		return 1;
	}

	if (range == NULL)
	{
		printf("Error: Range is NULL.\n");
		return 1;
	}

	printf("Range: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\n");

	free(range);

	return 0;
}
*/
