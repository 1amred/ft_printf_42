/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:46:34 by mamellal          #+#    #+#             */
/*   Updated: 2021/12/05 17:35:33 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexa_d(unsigned int nb, int *i)
{
	char	*str;

	str = "0123456789abcdef";
	if (nb >= 16)
	{
		hexa_d(nb / 16, i);
	}
	write (1, &str[nb % 16], 1);
	*i += 1;
	return (*i);
}
