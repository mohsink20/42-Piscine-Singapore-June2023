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
