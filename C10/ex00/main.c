#include <unistd.h>
#include <fcntl.h>

void	print_string(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(int argc, char *argv[])
{
	char	c;
	ssize_t	size;
	int	filedescriptor;

	if (argc == 1)
		print_string("File name missing.\n");
	else if (argc > 2)
		print_string("Too many arguments.\n");
	else
	{
		filedescriptor = open(argv[1], O_RDONLY);
		if (filedescriptor == -1)
			print_string("Cannot read file.\n");
		else
		{
			size = read(filedescriptor, &c, 1);
			while (size > 0)
			{
				write(1, &c, 1);
				size = read(filedescriptor, &c, 1);
			}
			close(filedescriptor);
		}
	}
	return (0);
}
