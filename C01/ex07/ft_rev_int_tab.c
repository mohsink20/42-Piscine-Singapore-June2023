void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while ( i < --size)
	{
		tmp = tab[i];
		tab[i++] = tab[size];
		tab[size] = tmp;
	}
}
/*
#include <stdio.h>

int main()
{
    int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("Before reversal: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    ft_rev_int_tab(tab, size);

    printf("After reversal: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
*/
