/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 17:43:43 by amontaut          #+#    #+#             */
/*   Updated: 2020/12/23 22:26:45 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;
	int printable;
	int other;

	printable = 0;
	other = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			printable = 1;
		else
			other = 1;
		i++;
	}
	if (other != 1 || (other != 1 && printable != 1))
		return (1);
	return (0);
}
