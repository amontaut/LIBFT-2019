/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 15:05:11 by amontaut          #+#    #+#             */
/*   Updated: 2020/12/04 23:45:21 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;
	int			i;

	i = 0;
	dest = dst;
	source = src;
	if (src == 0 && dst == 0)
		return (NULL);
	if (source < dest)
		while (len--)
			dest[len] = source[len];
	else
		while (len--)
			dest[i++] = *source++;
	return (dest);
}
