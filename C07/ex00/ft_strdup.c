#include <stdlib.h>

char	*ft_strdup(char *src)
{
	long long	len;
	char		*a;

	len = 0;
	while (src[len])
		++len;
	a = (char*)malloc(len + 1);
	a[len] = 0;
	while (--len >= 0)
		a[len] = src[len];
	return (a);
}
/*
#include <stdio.h>

int main(void)
{
	char str[] = "Hello, world!";
	char *duplicate = ft_strdup(str);

	printf("Original string: %s\n", str);
	printf("Duplicate string: %s\n", duplicate);

	free(duplicate);

	return 0;
}
*/
