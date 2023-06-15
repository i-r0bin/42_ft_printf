/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rilliano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:40:23 by rilliano          #+#    #+#             */
/*   Updated: 2023/03/27 12:52:42 by rilliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_printhex(unsigned int n, const char format)
{
	if (n >= 16)
	{
		ft_printhex(n / 16, format);
		ft_printhex(n % 16, format);
	}
	else
	{
		if (n < 10)
			ft_printchar(n + '0');
		else
		{
			if (format == 'x')
				ft_printchar(n - 10 + 'a');
			else if (format == 'X')
				ft_printchar(n - 10 + 'A');
		}
	}
	return (ft_hexlen(n));
}
