/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:18:42 by amontaut          #+#    #+#             */
/*   Updated: 2020/11/22 18:05:31 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	size_dest;
	unsigned int	size_src;

	size_dest = ft_strlen(dst);
	size_src = ft_strlen(src);
	i = 0;
	if (size <= size_dest)
		return (size_src + size);
	while (src[i] && i + size_dest < size - 1)
	{
		dst[i + size_dest] = src[i];
		i++;
	}
	dst[i + size_dest] = '\0';
	return (size_dest + size_src);
}
