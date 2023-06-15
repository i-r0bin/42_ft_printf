/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rilliano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:41:09 by rilliano          #+#    #+#             */
/*   Updated: 2023/03/27 12:49:08 by rilliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

# if defined (__linux__)
#  define PTR_NULL "(nil)"
# elif defined (__APPLE__)
#  define PTR_NULL "0x0"
# endif

int	ft_printf(const char *format, ...);
int	ft_printchar(int c);
int	ft_printstr(char *str);
int	ft_printptr(unsigned long long ptr);
int	ft_printnbr(int n);
int	ft_printuns(unsigned int n);
int	ft_printhex(unsigned int n, const char format);

#endif
