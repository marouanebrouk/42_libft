/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:00:13 by mbrouk            #+#    #+#             */
/*   Updated: 2024/10/23 15:23:35 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_convert_int_to_char(char *string, long num)
{
	int	k;

	k = 0;
	while (num != 0)
	{
		string[k] = num % 10 + '0';
		num = num / 10;
		k++;
	}
	return (k);
}

char	*ft_itoa(long n)
{
	int	i;
	int	k;
	long	num;
	char	string[15];
	char	*s;

	num = n;
	s = malloc(15);
	i = 0;
	if (num < 0)
	{
		num = -num;
		s[i] = '-';
		i++;
	}
	if (num == 0)
		s[i++] = '0';
	k = ft_convert_int_to_char(string, num);
	while (k != 0)
	{
		s[i] = string[--k];
		i++;
	}
	s[i] = '\0';
	return (s);
}
#include <stdio.h>

int	main()
{
	printf("%s",ft_itoa(2147483649));
}
