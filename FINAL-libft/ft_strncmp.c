/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:34:58 by amontaut          #+#    #+#             */
/*   Updated: 2020/11/22 18:03:12 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && j < n)
	{
		i++;
		j++;
	}
	if (j < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
