/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:34:53 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/07 14:15:23 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;	
	size_t	i;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dst);
	if (destlen >= size)
		return (srclen + size);
	i = 0;
	while (src[i] && (destlen + i) < size - 1)
	{
		dst[destlen + i] = src[i];
		i++;
	}
	dst[destlen + i] = '\0';
	return (destlen + srclen);
}
/*
int main()
{
	char dest[] = "he";
	char src[] = "brk";
	printf("%zu\n",ft_strlcat(dest,src,6));
	printf("%s",dest);
}*/
