char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	ptr = dest;
	while (*ptr)
		++ptr;
	while (*src && i < nb)
	{
		*ptr = *src;
		++src;
		++ptr;
		++i;
	}
	*ptr = 0;
	return (dest);
}

#include <stdio.h>
/*
int main(void)
{
	char dest[20] = "Hello, ";
	char src1[] = "world!";
	char src2[] = " How are you?";
	unsigned int num_chars = 6;

	printf("Before concatenation: %s\n", dest);

	ft_strncat(dest, src1, num_chars);
	printf("After concatenating %u characters from src1: %s\n", num_chars, dest);

	ft_strncat(dest, src2, num_chars);
	printf("After concatenating %u characters from src2: %s\n", num_chars, dest);

	return 0;
}
*/
