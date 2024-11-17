/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <mbrouk@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:10:18 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/09 16:35:51 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *tofind, size_t n)
{
	size_t	i;
	size_t	j;

	if (!*tofind)
		return ((char *)haystack);
	i = -1;
	while (++i < n && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == tofind[j] && i + j < n)
		{
			if (!tofind[j + 1])
				return ((char *)(haystack + i));
			j++;
		}
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	//char s[] = "mar hello world";
	//char to_find[] = "mar";
	//size_t n = 5;
	char *re;
	re = ft_strnstr("hello world","wor",30);
	printf("%s \n",re);
}*/
