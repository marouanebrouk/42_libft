/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:07:40 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/02 22:00:14 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	y;

	if (!s)
		return ;
	y = 0;
	while (s[y])
	{
		f(y, &s[y]);
		y++;
	}
}
/*
#include <stdio.h>

#include <ctype.h>

void example_function(unsigned int i, char *c) {
    if (i && islower(*c))
        *c = toupper(*c);
}

int main() {
    char s[] = "hello world!";
    printf("Originel: %s\n", s);

    ft_striteri(s, example_function);
    
    printf("Modified: %s\n", s);

    return 0;
}*/
