/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:49:34 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/11 11:07:13 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_len(uintptr_t n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != '\0')
	{
		n /= 16;
		len++;
	}
	return (len);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, ("(null)"), 6);
		return (6);
	}
	while (str[i] != '\0')
		i++;
	return (i);
}

int	handle_ptr(void *ptr)
{
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ft_putstr("0x");
	ft_puthex_void(ptr);
	return (2 + hex_len((uintptr_t)ptr));
}

void	ft_putunsnbr(unsigned int nbr)
{
	if (nbr >= 10)
	{
		ft_putunsnbr(nbr / 10);
	}
	ft_putchar((nbr % 10) + '0');
}
