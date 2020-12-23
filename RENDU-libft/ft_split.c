/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 18:30:56 by amontaut          #+#    #+#             */
/*   Updated: 2020/11/24 13:27:50 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		a_charset(char c, char charset)
{
	int	i;

	i = 0;
	if (c == charset)
		return (1);
	return (0);
}

char	*copy_word(const char *str, char charset, int i)
{
	char	*another_word;
	int		word_size;

	word_size = 0;
	while (str[i] && (a_charset(str[i], charset) == 0))
	{
		word_size++;
		i++;
	}
	if (!(another_word = malloc((word_size + 1) * sizeof(char *))))
		return (NULL);
	i = i - word_size;
	word_size = 0;
	while (str[i] && (a_charset(str[i], charset) == 0))
	{
		another_word[word_size] = str[i];
		word_size++;
		i++;
	}
	another_word[word_size] = 0;
	return (another_word);
}

int		how_many_words(const char *str, char charset)
{
	int	i;
	int	a_word;

	i = 0;
	a_word = 0;
	while (str[i])
	{
		while (str[i] && (a_charset(str[i], charset) == 1))
			i++;
		if (str[i] && (a_charset(str[i], charset) == 0))
			a_word++;
		while (str[i] && (a_charset(str[i], charset) == 0))
			i++;
	}
	return (a_word);
}

char	**ft_split(char const *str, char c)
{
	char	**finale_table;
	int		i;
	int		j;

	if (str == NULL)
		return (NULL);
	if ((!(finale_table = malloc(((how_many_words(str, c)) + 1) * \
						sizeof(char *)))))
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] && (a_charset(str[i], c) == 1))
			i++;
		if (str[i] && (a_charset(str[i], c) == 0))
		{
			finale_table[j] = copy_word(str, c, i);
			j++;
		}
		while (str[i] && (a_charset(str[i], c) == 0))
			i++;
	}
	finale_table[j] = 0;
	return (finale_table);
}
