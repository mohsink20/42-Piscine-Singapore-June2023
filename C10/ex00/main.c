#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char *argv[])
{
	char	c;
	int		a;
	int		b;

	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		b = open(argv[1], O_RDONLY);
		if (b == -1)
			ft_putstr("Cannot read file.\n");
		else
		{
			a = read(b, &c, 1);
			while (a)
			{
				write(1, &c, 1);
				a = read(b, &c, 1);
			}
			close(b);
		}
	}
	return (0);
}
