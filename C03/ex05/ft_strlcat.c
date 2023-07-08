unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (*dest && i < size)
	{
		++i;
		++dest;
	}
	while (*src && i + 1 < size)
	{
		*dest = *src;
		++dest;
		++src;
		++i;
	}
	if (i < size)
		*dest = 0;
	while (*src)
	{
		++i;
		++src;
	}
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	char dest[20] = "Hello, ";
	char src[] = "world!";
	unsigned int size = sizeof(dest);

	unsigned int result = ft_strlcat(dest, src, size);
	printf("Concatenated string: %s\n", dest);
	printf("Length of concatenated string: %u\n", result);

	return 0;
}
*/
