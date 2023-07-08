#include <stdlib.h>

int			is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		++charset;
	}
	return (0);
}

long long	get_word_cnt(char *str, char *charset)
{
	long long count;

	count = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			++count;
			while (*str && !is_in_charset(*str, charset))
				++str;
		}
		++str;
	}
	return (count);
}

void		ft_strcpy(char *dst, char *from, char *until)
{
	while (from < until)
		*(dst++) = *(from++);
	*dst = 0;
}

char		**ft_split(char *str, char *charset)
{
	char		**a;
	long long	i;
	char		*from;

	a = (char**)malloc(sizeof(char*) * get_word_cnt(str, charset) + 1);
	i = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			from = str;
			while (*str && !is_in_charset(*str, charset))
				++str;
			a[i] = (char*)malloc(str - from + 1);
			ft_strcpy(a[i++], from, str);
		}
		++str;
	}
	a[i] = 0;
	return (a);
}
