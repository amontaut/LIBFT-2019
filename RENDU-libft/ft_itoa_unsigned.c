/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 19:54:58 by amontaut          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/01/12 22:32:45 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_response(uintptr_t n)
{
	int size_res;
	uintptr_t div;
=======
/*   Updated: 2021/04/01 12:17:06 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	size_response(uintptr_t n)
{
	int			size_res;
	uintptr_t	div;
>>>>>>> 77aa4cef148c68b0aff5e3a9d3716f50ac657ae9

	div = n;
	size_res = 0;
	while (div != 0)
	{
		div = div / 10;
		size_res++;
	}
	return (size_res);
}

static char	*n_is_pos(uintptr_t n, int size_res)
{
	char	*res;
	int		j;

	if (!(res = (char *)malloc(sizeof(char) * size_res + 1)))
		return (NULL);
	j = size_res - 1;
	while (n != 0)
		while (j >= 0)
		{
			res[j] = n % 10 + '0';
			n = n / 10;
			j--;
		}
	res[size_res] = '\0';
	return (res);
}

static char	*n_is_neg(uintptr_t n, int size_res)
{
	char	*res;
	int		j;

	if (!(res = (char *)malloc(sizeof(char) * (size_res + 2))))
		return (NULL);
	j = size_res;
	res[0] = '-';
	while (n != 0)
		while (j > 0)
		{
			res[j] = n % 10 + '0';
			n = n / 10;
			j--;
		}
	res[size_res + 1] = '\0';
	return (res);
}

static char	*n_is_zero(int size_res)
{
	char	*res;

	if (!(res = (char *)malloc(sizeof(char) * (size_res + 2))))
		return (NULL);
	res[0] = '0';
	res[1] = '\0';
	return (res);
}

char		*ft_itoa_unsigned(uintptr_t n)
{
<<<<<<< HEAD
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n > 0)
		return (n_is_pos(n, size_response(n)));
=======
	if (n == (unsigned long)-2147483648)
		return (ft_strdup("-2147483648"));
	else if (n > 0)
	{
		return (n_is_pos(n, size_response(n)));
	}
>>>>>>> 77aa4cef148c68b0aff5e3a9d3716f50ac657ae9
	else if (n < 0)
	{
		n = n * -1;
		return (n_is_neg(n, size_response(n)));
	}
	else
		return (n_is_zero(size_response(n)));
	return (NULL);
}
