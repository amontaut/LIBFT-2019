/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:08:11 by amontaut          #+#    #+#             */
/*   Updated: 2020/11/22 19:33:45 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned long	i;

	if (s == NULL)
		return (0);
	if (!(res = (char *)malloc((sizeof(char)) * (len + 1))))
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
	{
		res[0] = '\0';
		return (res);
	}
	else
	{
		while (i < len)
		{
			res[i] = s[start + i];
			i++;
		}
		res[i] = '\0';
		return (res);
	}
}
