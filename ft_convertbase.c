/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertbase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:33:57 by aboulest          #+#    #+#             */
/*   Updated: 2022/12/08 11:02:36 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_leng_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	ft_count_char(long n, int lenbase)
{
	int	ret;

	if (n == 0)
		return (1);
	ret = (n < 0);
	if (ret == 1)
		n *= -1;
	while (n > 0)
	{
		ret++;
		n /= lenbase;
	}
	return (ret);
}

static int	ft_putnbr_base( long nbr, char *base)
{
	long	baselength;
	int		ret;

	baselength = ft_leng_str (base);
	if (nbr > baselength - 1)
		ft_putnbr_base (nbr / baselength, base);
	ft_putchar (base[nbr % baselength]);
	ret = ft_count_char(nbr, baselength);
	return (ret);
}

int	ft_convertbase(char c, long n)
{
	int		ret;
	char	*base;

	ret = 0;
	if (c == 'p' || c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	else
	{
		base = NULL;
		return (-1);
	}
	ret += ft_putnbr_base(n, base);
	return (ret);
}
