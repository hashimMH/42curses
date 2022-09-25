#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *tem1;
	const char *tem2;

	tem1 = dst;
	tem2 = src;
	i = 0;
	while (i < len && tem2 <= tem1)
	{
		tem1[len - 1] = tem2[len - 1];
		len --;
	}
	while (i < len && tem2 > tem1 )
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
	char b[6] = "Nadirr";
	char s[6] = "Ahmed";
	char d[6] = "Nadirr";
	printf("dest is: %s , %s\n", a , s);
	char *ret = ft_memmove(a,b,3);
	char *rett = memmove(s,d,3);
	printf("Our fun says....  : %s, %s\n", b , ret);
	printf("Original  says.... : %s , %s \n", d , rett);
	return(0);

}