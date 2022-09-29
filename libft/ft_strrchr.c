

int	check(int i, char *s, int c)
{
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && !check(i + 1, (char *)s, c))
			return ((char *)(s + i));
		i++;
	}
	return (0);
}