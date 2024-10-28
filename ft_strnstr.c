/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <mbrouk@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:10:18 by mbrouk            #+#    #+#             */
/*   Updated: 2024/10/27 12:09:21 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] && i + j < n)
		{
			if (to_find[j + 1] == '\0')
				return ((char *)(str + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
#include <bsd/string.h>
int main()
{
	char s[] = "marouane brouk";
	char to_find[] = "marouane";
	size_t n = 100000000;
	printf("%s\n",ft_strnstr(s,to_find,n));
	//printf("%s\n",strnstr(s,to_find,n));
}*/
