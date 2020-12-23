/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:00:21 by amontaut          #+#    #+#             */
/*   Updated: 2020/11/22 17:52:22 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*block;

	block = (unsigned char *)s;
	while (n--)
		if ((unsigned char)c != *block)
			block++;
		else
			return (block);
	return (NULL);
}
