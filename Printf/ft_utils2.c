/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:59:39 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/10 20:51:25 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (str == NULL)
		return ;
	write(1, str, ft_strlen(str));
}

int	handle_char(int c)
{
	ft_putchar(c);
	return (1);
}

int	handle_str(char *str)
{
	ft_putstr(str);
	return (ft_strlen(str));
}

int	handle_pcent(void)
{
	ft_putchar('%');
	return (1);
}
