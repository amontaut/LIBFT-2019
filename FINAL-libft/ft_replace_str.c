/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 20:22:32 by amontaut          #+#    #+#             */
/*   Updated: 2021/04/01 22:00:35 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This file replaces char at the index i by one or several char (so a str)
** called replacement. So in old_str, the char at the index i is replaced by
** the str replacement. new str is returned.
*/

char	*generate_str(int i, char *newstr, char *replacement, char *old_str)
{
	unsigned long	j;
	int				tmp;

	j = 0;
	tmp = i + 1;
	while (j < ft_strlen(replacement))
	{
		newstr[i] = replacement[j];
		i++;
		j++;
	}
	while (old_str[tmp])
	{
		newstr[i] = old_str[tmp];
		i++;
		tmp++;
	}
	newstr[i] = '\0';
	return (newstr);
}

char	*str_replace(int index, char *old_str, char *replacement)
{
	char			*newstr;
	int				i;

	newstr = NULL;
	i = 0;
	newstr = malloc(sizeof(char *) * (ft_strlen((old_str)) + \
				ft_strlen(replacement)));
	while (old_str[i])
	{
		newstr[i] = old_str[i];
		i++;
	}
	newstr[(ft_strlen(old_str) + ft_strlen(replacement))] = '\0';
	i = 0;
	while (i < index)
	{
		newstr[i] = old_str[i];
		i++;
	}
	return (generate_str(i, newstr, replacement, old_str));
}
