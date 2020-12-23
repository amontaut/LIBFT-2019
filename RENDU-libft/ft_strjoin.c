/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:43:22 by amontaut          #+#    #+#             */
/*   Updated: 2020/11/24 13:31:30 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned long	i;
	char			*res;
	int				j;

	if (s1 == NULL)
		return ((char *)s2);
	if (!(res = (char *)malloc(sizeof(char) * \
					((ft_strlen(s1) + ft_strlen(s2)) + 1))))
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < (ft_strlen(s1) + ft_strlen(s2)))
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
