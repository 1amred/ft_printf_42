/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:57:02 by mamellal          #+#    #+#             */
/*   Updated: 2021/12/05 17:29:13 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	chk(va_list ap, char str)
{
	int	i;

	i = 0;
	if (str == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (str == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (str == 'd' || str == 'i')
		return (putnbrm(va_arg(ap, int)));
	else if (str == 'u')
		return (uputnbrm(va_arg(ap, unsigned int)));
	else if (str == 'x')
		return (hexa_d(va_arg(ap, unsigned int), &i));
	else if (str == 'X')
		return (hexa_dp(va_arg(ap, unsigned int), &i));
	else if (str == 'p')
	{
		ft_putstr("0x");
		add_p(va_arg(ap, unsigned long int), &i);
		return (i + 2);
	}
	return (ft_putchar(str));
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (!*str)
				return (i);
			i += chk(ap, *str);
		}
		else
		i += ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return (i);
}
