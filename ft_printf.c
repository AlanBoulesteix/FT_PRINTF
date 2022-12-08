/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:36:35 by aboulest          #+#    #+#             */
/*   Updated: 2022/12/08 11:35:09 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		ret;
	int		i;

	i = -1;
	ret = 0;
	va_start(arg, format);
	while (format[++i])
	{
		if (format[i] != '%')
			ret += write(1, &format[i], 1);
		else
		{
			i++;
			ret += print_arg(format[i], arg);
		}
	}
	va_end(arg);
	return (ret);
}
/*
int main()
{
	// %c
	ft_printf("TEST C\n");
	ft_printf ("ft_printf = %c\n", 'c');
	printf ("printf = %c\n", 'c');
	printf ("le return = %d\n", ft_printf("%c ", 'c'));
	printf ("le return = %d\n", printf("%c ", 'c'));

	// %s
	ft_printf("\n\nTEST S\n");
	ft_printf ("ft_printf = %s\n", "La vie est belle a 42");
	printf ("printf = %s\n", "La vie est belle a 42");
	printf ("le return = %d\n", ft_printf("%s ",  "La vie est belle a 42"));
	printf ("le return = %d\n", printf("%s ",  "La vie est belle a 42"));

	// %p
	char *ptr = "AMOUR";
	ft_printf("\n\nTEST P\n");
	ft_printf ("ft_printf = %p\n",ptr);
	printf ("printf = %p\n", ptr);
	printf ("le return = %d\n", ft_printf("%p ", ptr));
	printf ("le return = %d\n", printf("%p ", ptr));

	// %d
	ft_printf("\n\nTEST D\n");
	ft_printf ("ft_printf = %d\n",42);
	printf ("printf = %d\n", 42);
	printf ("le return = %d\n", ft_printf("%d ", 42));
	printf ("le return = %d\n", printf("%d ", 42));

	// %i
	ft_printf("\n\nTEST I\n");
	ft_printf ("ft_printf = %i\n",101010);
	printf ("printf = %i\n", 101010);
	printf ("le return = %d\n", ft_printf("%i ", 101010));
	printf ("le return = %d\n", printf("%i ", 101010));

	// %u
	ft_printf("\n\nTEST U\n");
	ft_printf ("ft_printf = %u\n", -101010);
	printf ("printf = %u\n", -101010);
	printf ("le return = %d\n", ft_printf("%u ", -101010));
	printf ("le return = %d\n", printf("%u ", -101010));

	// %x
	ft_printf("\n\nTEST x\n");
	ft_printf ("ft_printf = %x\n", -101010);
	printf ("printf = %x\n", -101010);
	printf ("le return = %d\n", ft_printf("%x ", -101010));
	printf ("le return = %d\n", printf("%x ", -101010));

	// %X
	ft_printf("\n\nTEST X\n");
	ft_printf ("ft_printf = %X\n", 42);
	printf ("printf = %X\n", 42);
	printf ("le return = %d\n", ft_printf("%X ", 42));
	printf ("le return = %d\n", printf("%X ", 42));

	// MIX
	ft_printf("\n\nTEST X\n");
	ft_printf ("ft_printf = %X %s %p %d\n", 42, "bonjour", ptr, 42);
	printf ("printf = %X %s %p %d\n", 42, "bonjour", ptr, 42);
	printf ("le return = %d\n", ft_printf("%X %s %p %d ", 42, "bonjour", ptr, 42));
	printf ("le return = %d\n", printf("%X %s %p %d ", 42, "bonjour", ptr, 42));
}*/
