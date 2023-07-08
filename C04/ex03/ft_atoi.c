int	empty(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = empty(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	char str1[] = "12345";
	char str2[] = "-987";
	char str3[] = "  +42";
	char str4[] = "invalid";

	int num1 = ft_atoi(str1);
	int num2 = ft_atoi(str2);
	int num3 = ft_atoi(str3);
	int num4 = ft_atoi(str4);

	printf("Number 1: %d\n", num1);
	printf("Number 2: %d\n", num2);
	printf("Number 3: %d\n", num3);
	printf("Number 4: %d\n", num4);

	return 0;
}
*/
