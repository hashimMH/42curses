#include "libft.h"
#include <ctype.h>

int	ft_isalnum(int c)
{
	int	re;

	re = 0;
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
	{
		re = 1;
	}
	return (re);
}
