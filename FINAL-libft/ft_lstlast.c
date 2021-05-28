/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 16:24:46 by amontaut          #+#    #+#             */
/*   Updated: 2020/11/24 13:17:01 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*refresh;

	if (lst == NULL)
		return (NULL);
	refresh = lst;
	while (refresh->next != 0)
		refresh = refresh->next;
	return (refresh);
}
