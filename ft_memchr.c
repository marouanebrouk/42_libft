/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:04:58 by mbrouk            #+#    #+#             */
/*   Updated: 2024/10/24 10:35:18 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		if (p[i] == c)
			return (p + i);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char str[] = "marouane";
	char *test;
	int c = 'o';
       	test = ft_memchr(str,c,4);
	printf("%s",test);
}*/
