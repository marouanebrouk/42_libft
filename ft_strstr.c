/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:29:28 by mbrouk            #+#    #+#             */
/*   Updated: 2024/10/27 11:13:19 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *f)
{
	int	i;
	int	j;

	i = 0;
	if (f[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i] && str[i + j] == f[j])
		{
			if (f[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
int main()
{
	char *str = "brouk";
	char *f = "k";
	printf("%s\n",ft_strstr(str,f));
	printf("%s\n",strstr(str,f));
}*/
