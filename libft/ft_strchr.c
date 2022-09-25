
// char *ft_strchr(const char *s, int c)
// {

// }


#include <stdio.h>
#include <string.h>

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main () {
    char str[] = "http://www.tutorialspoint.com";
    char ch = '.';
    char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);

   ret = ft_strchr(str, ch);
   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}
