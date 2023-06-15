/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rilliano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:40:34 by rilliano          #+#    #+#             */
/*   Updated: 2023/05/29 15:23:50 by rilliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptrlen(unsigned long long ptr)
{
	int	i;

	i = 0;
	if (ptr == 0)
		return (1);
	while (ptr > 0)
	{
		ptr /= 16;
		i++;
	}
	return (i);
}

void	ft_printadr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_printadr(ptr / 16);
		ft_printadr(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			ft_printchar(ptr + '0');
		else if (ptr >= 10)
			ft_printchar(ptr - 10 + 'a');
	}
	return ;
}

int	ft_printptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
	{
		len += ft_printstr(PTR_NULL);
		return (len);
	}
	len += ft_printstr("0x");
	ft_printadr(ptr);
	len += ft_ptrlen(ptr);
	return (len);
}
