/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <mbrouk@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:40:13 by mbrouk            #+#    #+#             */
/*   Updated: 2024/10/23 16:28:19 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	i;
	int	a;

	i = 0;
	a = -1;
	while (str[i])
	{
		if (str[i] == c)
			a = i;
		i++;
	}
	if (a == -1)
		return (NULL);
	return (str + a);
}
/*
int main()
{
	char str[] = "ayman";
	int c = 'a';
	printf("%s",ft_strrchr(str,c));
}*/
