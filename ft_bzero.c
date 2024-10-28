/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <mbrouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:30:15 by mbrouk            #+#    #+#             */
/*   Updated: 2024/10/28 14:34:06 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
		p[i++] = '\0';
}
/*
int main()
{
	char str[] = "marouane";
	ft_bzero(str+6,5);
	printf("%s",str);
}*/
