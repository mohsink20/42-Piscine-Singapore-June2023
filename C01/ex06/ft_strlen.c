#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}
/*
int	main()
{
	char *c = "Hello World!";
	printf("%d", ft_strlen(c));
}
*/
