int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	char str1[] = "Hello, world!";
	char str2[] = "";
	char str3[] = "abcdefg";

	int len1 = ft_strlen(str1);
	int len2 = ft_strlen(str2);
	int len3 = ft_strlen(str3);

	printf("Length of str1: %d\n", len1);
	printf("Length of str2: %d\n", len2);
	printf("Length of str3: %d\n", len3);

	return 0;
}
*/
