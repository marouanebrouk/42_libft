/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:00:13 by mbrouk            #+#    #+#             */
/*   Updated: 2024/10/26 11:35:53 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len_int(int num)
{
	int	count;

	count = 0;
	if (num == 0)
		count++;
	if (num < 0)
	{
		count++;
		num = -num;
	}
	while (num)
	{
		count++;
		num = num / 10;
	}
	return (count);
}

char	*ft_itoa(int num)
{
	char	*s;
	size_t	int_len;
	int		i;

	int_len = ft_len_int(num);
	s = malloc(int_len + 1);
	if (!s)
		return (NULL);
	i = 0;
	if (num < 0)
	{
		num = -num;
		s[i++] = '-';
	}
	if (num == 0)
		s[i++] = '0';
	s[int_len] = '\0';
	while (num)
	{
		s[--int_len] = num % 10 + '0';
		num = num / 10;
	}
	return (s);
}
/*
int	main()
{
	printf("%s\n",ft_itoa(0));
	printf("%s\n",ft_itoa(-125));
	printf("%s\n",ft_itoa(123456789));
}*/
