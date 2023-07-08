#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0' && argc)
	{
		ft_putchar(argv[0][i]);
		++i;
	}
	ft_putchar('\n');
	return (0);
}
/*
Test

1) Compile the code: gcc -Wall -Werror -Wextra ft_print_program_name.c -o test
2) Run: ./test Hello World
3) Output: ./test
*/
