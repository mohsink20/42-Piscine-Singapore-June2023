char	*ft_strstr(char *str, char *to_find)
{
	char *a;
	char *b;

	if (!*to_find)
		return (str);
	while (*str)
	{
		a = str;
		b = to_find;
		while (*b && *a == *b)
		{
			++a;
			++b;
		}
		if (*b == 0)
			return (str);
		++str;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	char str1[] = "Hello, world!";
	char str2[] = "world";
	char str3[] = "Random String";
	char *result;

	result = ft_strstr(str1, str2);
	if (result)
		printf("Substring found at index: %ld\n", result - str1);
	else
		printf("Substring not found.\n");

	result = ft_strstr(str1, str3);
	if (result)
		printf("Substring found at index: %ld\n", result - str1);
	else
		printf("Substring not found.\n");

	return 0;
}
*/
