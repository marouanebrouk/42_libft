/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:22:31 by mbrouk            #+#    #+#             */
/*   Updated: 2024/10/27 18:14:00 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		i;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1) - 1;
	i = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	while (end > start && is_in_set(s1[end], set))
		end--;
	trimmed = ft_substr(s1, start, end - start + 1);
	return (trimmed);
}
/*
int main()
{
	char *str = "vvc brouk vc";
	char *set = "vc ";
	printf("%s",ft_strtrim(str,set));
}*/
