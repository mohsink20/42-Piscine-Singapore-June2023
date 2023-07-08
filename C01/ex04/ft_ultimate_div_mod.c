void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int main()
{
    int a = 20;
    int b = 7;

    printf("Before: a = %d, b = %d\n", a, b);

    ft_ultimate_div_mod(&a, &b);

    printf("After: a = %d, b = %d\n", a, b);

    return 0;
}
*/
