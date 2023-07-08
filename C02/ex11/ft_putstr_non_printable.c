#include <unistd.h>

int		is_printable(unsigned char c)
{
	if (' ' <= c && c <= '~')
		return (1);
	return (0);
}

void	write_hex(unsigned char c)
{
	c = c + '0';
	if (c > '9')
		c = c + 39;
	write(1, &c, 1);
}

void	print_hex(unsigned char c)
{
	write(1, "\\", 1);
	write_hex((int)c / 16);
	write_hex((int)c % 16);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (!is_printable(*str))
			print_hex(*str);
		else
			write(1, str, 1);
		++str;
	}
}
/*
int main(void)
{
	char *str1 = "Hello, world!";
	char *str2 = "Testing\n\tthe function.";
	char *str3 = "Some non-printable characters: \x07\x1F\x80\xFF";

	ft_putstr_non_printable(str1);
	write(1, "\n", 1);
	ft_putstr_non_printable(str2);
	write(1, "\n", 1);
	ft_putstr_non_printable(str3);
	write(1, "\n", 1);

	return 0;
}
*/
