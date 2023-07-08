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
