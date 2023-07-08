void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while (++i < size)
	{
		j = 0;
		while (++j < size)
		{
			if (tab[j - 1] > tab[j])
			{
				tmp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = tmp;
			}
		}
	}
}
/*
#include <stdio.h>

int main()
{
    int tab[] = {5, 2, 7, 1, 4};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("Before sorting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    ft_sort_int_tab(tab, size);

    printf("After sorting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
*/
