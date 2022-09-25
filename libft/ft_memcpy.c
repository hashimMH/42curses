#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *tem1;
	const char *tem2;

	tem1 = dst;
	tem2 = src;
	i = 0;
	while (i < n)
	{
		tem1[i] = tem2[i];
		i++;
	}
	return (tem1);
}

#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[6] = "Ahmed";
	char b[6] = "Nadir";
	char s[6] = "Ahmed";
	char d[6] = "Nadir";
	printf("dest is: %s , %s\n", a , s);
	char *ret = ft_memcpy(a,b,3);
	char *rett = memcpy(s,d,3);
	printf("Our fun says....  : %s, %s\n", b , ret);
	printf("Original  says.... : %s , %s \n", d , rett);
	return(0);

}