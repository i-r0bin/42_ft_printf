/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rilliano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:40:47 by rilliano          #+#    #+#             */
/*   Updated: 2023/03/27 13:00:02 by rilliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_utoa(unsigned int n)
{
	char	*nbr;
	int		len;
	int		i;

	len = ft_nbrlen(n);
	nbr = (char *)malloc(sizeof(char) * (len + 1));
	if (!nbr)
		return (0);
	while (i < len)
	{
		nbr[i] = n / 10 + '0';
		n %= 10;
		i++;
	}
	nbr[len] = '\0';
	return (nbr);
}

int	ft_printuns(unsigned int n)
{
	int		len;
	char	*nbr;

	nbr = ft_utoa(n);
	len = ft_printstr(nbr);
	free(nbr);
	return (len);
}
