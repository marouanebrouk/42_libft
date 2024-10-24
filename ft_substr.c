/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:25:24 by mbrouk            #+#    #+#             */
/*   Updated: 2024/10/24 10:10:47 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen(s);
	if (len > slen)
		return (NULL);
	if (len > slen - start)
		len = slen - start;
	substr = malloc(slen - start + 1);
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
int	main()
{
	char str[] = "marouane";
	printf("%s",ft_substr(str,5,3));
}*/
