/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:02:06 by aboulest          #+#    #+#             */
/*   Updated: 2022/12/06 16:55:40 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(unsigned int n)
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

int	ft_putnbr_u(unsigned int n)
{
	int	ret;

	ret = 0;
	if (n > 9)
		ft_putnbr_u(n / 10);
	ft_putchar(n % 10 + '0');
	ret += ft_count(n);
	return (ret);
}
