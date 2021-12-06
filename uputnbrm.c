/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uputnbrm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:49:51 by mamellal          #+#    #+#             */
/*   Updated: 2021/12/05 17:38:09 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(unsigned int n)
{
	if (n < 10)
	{
		ft_putchar (n + '0');
	}
	else
	{
		ft_putnbr (n / 10);
		ft_putchar (n % 10 + '0');
	}
}

int	uputnbrm(unsigned long int n)
{
	int				size;
	unsigned int	b;

	size = 0;
	b = n;
	while (b >= 10)
	{
		b = b / 10;
		size++;
	}
	size++;
	ft_putnbr(n);
	return (size);
}
