int	ft_isascii(int c)
{
	int	re;

	re = 1;
	if (c < 0 || c > 127)
			re = 0;
	return (re);
}
