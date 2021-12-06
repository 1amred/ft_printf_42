/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:19:06 by mamellal          #+#    #+#             */
/*   Updated: 2021/12/05 17:33:04 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	putnbrm(int n);
int	ft_putstr(char *str);
int	uputnbrm(unsigned long int n);
int	hexa_d(unsigned int nb, int *i);
int	hexa_dp(unsigned int nb, int *i);
int	add_p(unsigned long int nb, int *i);
#endif
