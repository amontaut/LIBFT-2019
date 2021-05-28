/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:46:48 by amontaut          #+#    #+#             */
/*   Updated: 2020/12/04 15:16:02 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*ptr;
	unsigned long	i;

	i = 0;
	if (count < 0 || size < 0)
		return (NULL);
	else
	{
		if (!(ptr = malloc(size * count)))
			return (NULL);
		while (i < (size * count))
		{
			ptr[i] = 0;
			i++;
		}
		return (ptr);
	}
}
