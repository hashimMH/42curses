#include <stdio.h>
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


int main()
{
    char c;
    int result;

    c = '5';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'Q';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'l';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = '&';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

	c = '5';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'Q';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'l';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = '&';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);


    return 0;
}