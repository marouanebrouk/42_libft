/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:00:13 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/05 15:58:15 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len_int(long longnum)
{
	int	count;

	count = 0;
	if (longnum == 0)
		count++;
	if (longnum < 0)
	{
		count++;
		longnum = -longnum;
	}
	while (longnum)
	{
		count++;
		longnum = longnum / 10;
	}
	return (count);
}

char	*ft_itoa(int num)
{
	char		*s;
	size_t		int_len;
	int			i;
	long		longnum;

	longnum = num;
	int_len = ft_len_int(longnum);
	s = malloc(int_len + 1);
	if (!s)
		return (NULL);
	i = 0;
	if (longnum < 0)
	{
		longnum = -longnum;
		s[i++] = '-';
	}
	if (longnum == 0)
		s[i++] = '0';
	s[int_len] = '\0';
	while (longnum)
	{
		s[--int_len] = longnum % 10 + '0';
		longnum = longnum / 10;
	}
	return (s);
}
/*
int	main()
{
	printf("%s\n",ft_itoa(0123));
	printf("%s\n",ft_itoa(-125));
	printf("%s\n",ft_itoa(2147483647));
	printf("%s\n",ft_itoa(-2147483648));
}*/
