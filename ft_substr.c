/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:25:24 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/05 15:13:22 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		slen;
	size_t		i;

	i = 0;
	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > slen)
		return (ft_calloc(1, 1));
	if (len > slen - start)
		len = slen - start;
	substr = malloc(len + 1);
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
int main()
{
    char *str = "42";

//    printf("Original string: %s\n", str);
    
    printf("Substring: %s\n", ft_substr(str, 0, 0)); // Output: "brouk"
    printf("large start: %s\n", ft_substr(str, 50, 5)); // Output: ""
    
    printf("Large len: %s\n", ft_substr(str, 5, 20)); // Output: "anebrouk"

    printf("Zero len: %s\n", ft_substr(str, 5, 0)); // Output: ""
}*/
