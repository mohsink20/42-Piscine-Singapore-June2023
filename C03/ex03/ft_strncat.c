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
