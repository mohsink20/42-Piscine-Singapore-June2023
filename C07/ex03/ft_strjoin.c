#include <stdlib.h>

long long	ft_strlen(char *str)
{
	long long i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char		*ft_strcat(char *dst, char *src)
{
	while (*src)
		*(dst++) = *(src++);
	return (dst);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	char		*a;
	char		*tmp;
	long long	strs_len;
	int			i;

	if (!size)
	{
		a = ((char*)malloc(1));
		a[0] = 0;
		return (a);
	}
	strs_len = 0;
	i = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	a = (char*)malloc(strs_len + (size - 1) * ft_strlen(sep) + 1);
	tmp = ft_strcat(a, strs[0]);
	i = 1;
	while (i < size)
	{
		tmp = ft_strcat(tmp, sep);
		tmp = ft_strcat(tmp, strs[i++]);
	}
	*tmp = 0;
	return (a);
}
/*
#include <stdio.h>

int main(void)
{
	char *strs[] = {"Hello", "world", "from", "ft_strjoin!"};
	int size = sizeof(strs) / sizeof(strs[0]);
	char *sep = ", ";

	char *result = ft_strjoin(size, strs, sep);

	printf("Joined string: %s\n", result);

	free(result);

	return 0;
}
*/
