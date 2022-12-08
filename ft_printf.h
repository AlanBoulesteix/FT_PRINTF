/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:50:44 by aboulest          #+#    #+#             */
/*   Updated: 2022/12/08 11:02:06 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr_u(unsigned int n);
int	ft_putnbr_di(int n);
int	print_arg(char c, va_list arg);
int	ft_convertbase(char c, long n);
int	ft_printf(const char *format, ...);

#endif
