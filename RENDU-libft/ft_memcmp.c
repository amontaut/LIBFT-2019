/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:34:50 by amontaut          #+#    #+#             */
/*   Updated: 2020/11/22 17:54:51 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*src1;
	const unsigned char	*src2;
	unsigned long		i;

	src1 = s1;
	src2 = s2;
	i = 0;
	while (i < n)
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
		else
			i++;
	return (0);
}
