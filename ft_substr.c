/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:25:24 by mbrouk            #+#    #+#             */
/*   Updated: 2024/10/26 11:40:51 by mbrouk           ###   ########.fr       */
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
	if (!s)
		return (NULL);
	if (start > slen)
		return ("");
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
int main() {
    char *str = "marouanebrouk";
    printf("Original string: %s\n", str);
    
    // Normal case
    printf("Substring: %s\n", ft_substr(str, 8, 5)); // Output: "brouk"

    // Out-of-bounds start index
    printf("Out-of-bounds start: %s\n", ft_substr(str, 50, 5)); // Output: ""
    
    // Large len beyond string length
    printf("Large len: %s\n", ft_substr(str, 5, 20)); // Output: "anebrouk"

    // Zero length
    printf("Zero len: %s\n", ft_substr(str, 5, 0)); // Output: ""
}*/
