/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:22:36 by mbrouk            #+#    #+#             */
/*   Updated: 2024/10/26 15:27:10 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*p1;
	char	*p2;
	size_t	i;

	p1 = (char *)s1;
	p2 = (char *)s2;
	i = n;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
