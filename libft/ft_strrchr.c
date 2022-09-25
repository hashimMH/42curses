#include <stdio.h>
#include <string.h>

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

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && !check(i + 1, s, c))
			return (&s[i]);
		i++;
	}
	return (0);
}

int	main (){
	char str[] = "http://www.tutorialspoint.com";
	char ch = '.';
	char *ret;

	ret = strrchr(str, ch);

	printf("String after |%c| is - |%s|\n", ch, ret);
	
	ret = ft_strrchr(str, ch);

	printf("String after |%c| is - |%s|\n", ch, ret);
   
	return(0);
}