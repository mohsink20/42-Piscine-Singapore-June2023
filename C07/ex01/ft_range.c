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
/*
#include <stdio.h>

int main(void)
{
	int min = 1;
	int max = 6;

	int *range = ft_range(min, max);

	if (range == NULL)
	{
		printf("Error: Unable to create range.\n");
		return 1;
	}

	printf("Range: ");
	for (int i = 0; i < max - min; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\n");

	free(range);

	return 0;
}
*/
