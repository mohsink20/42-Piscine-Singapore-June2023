void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>

int main()
{
    int a = 20;
    int b = 7;
    int div, mod;

    ft_div_mod(a, b, &div, &mod);

    printf("Div: %d\n", div);
    printf("Mod: %d\n", mod);

    return 0;
}
*/
