/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:05:36 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/04 17:33:22 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst -> next;
		count++;
	}
	return (count);
}
/*
int main ()
{
	t_list *node1;
	t_list *node2;
	char *value = "mroaune";
	node1 = ft_lstnew(value);
	node2 = ft_lstnew(value);
	ft_lstadd_front(&node1, node2);
	int count = ft_lstsize(node1);

	printf("%d",count);
}*/
