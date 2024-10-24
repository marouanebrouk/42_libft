/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:41:53 by mbrouk            #+#    #+#             */
/*   Updated: 2024/10/24 10:47:36 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*arr;
	size_t	len;
	int	i;

	len = ft_strlen(str);
	i = 0;
	arr = malloc(sizeof(char) * len);
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
	char str[] = "marouane";
	printf("%s",ft_strdup(str));
}*/
