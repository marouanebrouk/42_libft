/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:41:53 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/01 17:43:33 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*arr;
	size_t	i;

	len = ft_strlen(str);
	i = 0;
	arr = malloc(len + 1);
	if (!arr)
		return (NULL);
	while (str[i])
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
/*
int main()
{
	char str[] = "1337mero";
	printf("%s",ft_strdup(str));
}*/
