#include "tail.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	print_error_msg(char *file)
{
	ft_putstr(basename(g_prog));
	ft_putstr(": ");
	ft_putstr(file);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
}

int		ft_atoi(char *str)
{
	int a;

	a = 0;
	while (*str)
	{
		a *= 10;
		a += (*(str++) - '0');
	}
	return (a);
}
