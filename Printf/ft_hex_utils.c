/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:45:15 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/11 11:10:50 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_void(void *n)
{
	char		*hexdigits;
	uintptr_t	num;

	num = (uintptr_t)n;
	hexdigits = "0123456789abcdef";
	if (num >= 16)
		ft_puthex_void((void *)(num / 16));
	write(1, &hexdigits[num % 16], 1);
}

void	ft_puthex_upper(unsigned int n)
{
	char	*hexdigits;

	hexdigits = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthex_upper(n / 16);
	write(1, &hexdigits[n % 16], 1);
}

int	handle_hex_upper(unsigned int n)
{
	ft_puthex_upper(n);
	return (hex_len(n));
}

void	ft_puthex_lower(unsigned int n)
{
	char	*hexdigits;

	hexdigits = "0123456789abcdef";
	if (n >= 16)
		ft_puthex_lower(n / 16);
	write(1, &hexdigits[n % 16], 1);
}

int	handle_hex_lower(unsigned int n)
{
	ft_puthex_lower(n);
	return (hex_len(n));
}
