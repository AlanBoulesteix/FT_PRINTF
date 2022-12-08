/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:39:42 by aboulest          #+#    #+#             */
/*   Updated: 2022/12/06 17:00:21 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(int n)
{
	int	nb;

	nb = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		nb++;
		n /= 10;
	}
	return (nb);
}

int	ft_putnbr_di(int n)
{
	int	ret;

	ret = (n < 0);
	if (n == -2147483648)
	{
		ret = write(1, "-2147483648", 11);
		return (ret);
	}
	if (ret == 1)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n > 9)
		ft_putnbr_di(n / 10);
	ft_putchar(n % 10 + '0');
	ret += ft_count(n);
	return (ret);
}
