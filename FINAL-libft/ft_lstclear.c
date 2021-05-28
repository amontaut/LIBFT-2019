/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:58:17 by amontaut          #+#    #+#             */
/*   Updated: 2020/11/23 15:48:09 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*refresh;

	if (lst == NULL)
		return ;
	while (*lst != NULL)
	{
		refresh = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = refresh;
	}
	*lst = NULL;
}
