/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rilliano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:41:20 by rilliano          #+#    #+#             */
/*   Updated: 2023/03/27 12:54:02 by rilliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int		len;
	char	*nbr;

	nbr = ft_itoa(n);
	len = ft_printstr(nbr);
	free(nbr);
	return (len);
}
