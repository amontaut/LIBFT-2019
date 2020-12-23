/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 18:27:39 by amontaut          #+#    #+#             */
/*   Updated: 2020/11/24 13:15:21 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*refresh;

	if (*alst == NULL)
		*alst = new;
	else
	{
		new->next = 0;
		refresh = *alst;
		while (refresh->next != 0)
			refresh = refresh->next;
		refresh->next = new;
	}
}
