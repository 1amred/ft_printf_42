/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbrm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:49:33 by mamellal          #+#    #+#             */
/*   Updated: 2021/12/05 17:37:38 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * -1);
	}
	else if (n < 10)
	{
		ft_putchar (n + '0');
	}
	else
	{
		ft_putnbr (n / 10);
		ft_putchar (n % 10 + '0');
	}
}

int	putnbrm(int n)
{
	int	size;
	int	b;

	b = n;
	size = 0;
	if (n == -2147483648)
	{
		ft_putnbr(n);
		return (11);
	}
	if (n < 0)
	{
		b *= -1;
		size++;
	}
	while (b >= 10)
	{
		b = b / 10;
		size++;
	}
	size++;
	ft_putnbr(n);
	return (size);
}
