/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:30:13 by mbrouk            #+#    #+#             */
/*   Updated: 2024/10/28 13:58:45 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	string = malloc(ft_strlen(s) + 1);
	if (!string)
		return (NULL);
	while (i < ft_strlen(s))
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
/*
#include <stdio.h>
#include <ctype.h>

char example_function(unsigned int i, char c) {
    if (i && islower(c))
        return toupper(c);
    return c;
}

int main()
{
    char *s = "hello world!";
    char *result;

    result = ft_strmapi(s, example_function);
    
    if (result) 
    {
        printf("Original string: %s\n", s);
        printf("Modified string: %s\n", result);
    }
}*/
