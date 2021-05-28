/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:59:58 by amontaut          #+#    #+#             */
/*   Updated: 2020/11/18 15:32:35 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long	i;
	int				j;

	i = 0;
	if (!*little)
		return ((char *)big);
	if (len <= 0)
		return (NULL);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			if ((little[j + 1] == 0) && ((j + i) < len))
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (0);
}
