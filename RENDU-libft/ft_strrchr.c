/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:15:19 by amontaut          #+#    #+#             */
/*   Updated: 2020/11/24 13:33:40 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		conv_c;
	const char	*new_s;
	int			len;

	new_s = s;
	len = ft_strlen(new_s) + 1;
	conv_c = c;
	while (len--)
		if (new_s[len] == conv_c)
			return ((char *)new_s + len);
	return (NULL);
}
