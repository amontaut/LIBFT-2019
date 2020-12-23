/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:42:20 by amontaut          #+#    #+#             */
/*   Updated: 2020/12/08 16:55:02 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		chercher(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

char	*malloc_and_copy(unsigned int sizef,\
		unsigned long istart, const char *s1)
{
	unsigned int	i;
	char			*res;

	if (!(res = malloc(sizeof(char) * (sizef + 1))))
		return (NULL);
	i = 0;
	while ((i < (sizef)) && istart <= ft_strlen(s1))
	{
		res[i] = s1[istart];
		i++;
		istart++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	sizef;
	unsigned int	istart;
	unsigned int	iend;

	if (s1 == NULL || set == NULL)
		return (NULL);
	istart = 0;
	while (chercher(s1[istart], set) == 1)
		istart++;
	i = ft_strlen(s1) - 1;
	if (i != -1)
		while (i >= 0 && chercher(s1[i], set) == 1)
			i--;
	iend = i;
	sizef = iend - istart + 1;
	return (malloc_and_copy(sizef, istart, s1));
}
