/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:03:04 by aboulest          #+#    #+#             */
/*   Updated: 2022/12/07 14:00:43 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_pointeur(unsigned long ptr, char c)
{
	int	ret;

	ret = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	else
	{
		ret += write(1, "0x", 2);
		ret += ft_convertbase(c, ptr);
	}
	return (ret);
}

int	print_arg(char c, va_list arg)
{
	int				ret;

	ret = 0;
	if (c == 'c')
		ret += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		ret += ft_putstr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		ret += ft_putnbr_di(va_arg(arg, int));
	else if (c == 'u')
		ret += ft_putnbr_u(va_arg(arg, unsigned int));
	else if (c == 'x' || c == 'X')
		ret += ft_convertbase(c, va_arg(arg, unsigned int));
	else if (c == 'p')
		ret += print_pointeur(va_arg(arg, unsigned long), c);
	else if (c == '%')
		ret += write(1, "%", 1);
	return (ret);
}
