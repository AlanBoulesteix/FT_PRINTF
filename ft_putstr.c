/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:20:27 by aboulest          #+#    #+#             */
/*   Updated: 2022/12/07 12:00:44 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	ret;

	ret = -1;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[++ret])
		write(1, &str[ret], 1);
	return (ret);
}
