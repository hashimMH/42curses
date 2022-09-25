#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = '\0';
		i++;
	}
}

#include <stdlib.h>
#include <string.h>

int main( void )
  {
    char buffer[80];

    bzero( buffer, 80 );
    return EXIT_SUCCESS;
  }