/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:31:29 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/02 17:31:46 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	a;
	char			*sr;

	a = 0;
	while (s[a] != '\0')
		a++;
	if (a <= 0)
		return (NULL);
	sr = (char *)malloc(sizeof(char) * a);
	a = 0;
	while (s[a] != '\0')
	{
		sr[a] = f(a, s[a]);
		a++;
	}
	return (sr);
}
