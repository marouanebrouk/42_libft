/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <mbrouk@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:40:13 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/01 16:46:01 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	a;

	i = 0;
	a = -1;
	while (str[i])
	{
		if (str[i] == ((unsigned char)c))
			a = i;
		i++;
	}
	if (c == '\0')
		return ((char *)str + i);
	if (a == -1)
		return (NULL);
	return ((char *)(str + a));
}
/*
int main()
{
	char str[] = "marouane";
	int c = 'a';
	printf("%s\n",ft_strrchr(str,c));
	printf("%s",strrchr(str,c));
}*/
