/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 12:16:20 by amontaut          #+#    #+#             */
/*   Updated: 2020/11/18 15:41:56 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;
	unsigned char		letter;

	letter = c;
	dest = dst;
	source = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
	{
		*dest = *source;
		if (*source == letter)
		{
			dest++;
			return (dest);
		}
		dest++;
		source++;
	}
	return (NULL);
}
