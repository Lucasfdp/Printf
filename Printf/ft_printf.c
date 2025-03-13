/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:40:20 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/11 11:22:27 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_specifier(char specifier, va_list args)
{
	if (specifier == 'c')
		return (handle_char(va_arg(args, int)));
	else if (specifier == 's')
		return (handle_str(va_arg(args, char *)));
	else if (specifier == 'i' || specifier == 'd')
		return (handle_int(va_arg(args, int)));
	else if (specifier == 'u')
		return (handle_uint(va_arg(args, unsigned int)));
	else if (specifier == 'x')
		return (handle_hex_lower(va_arg(args, unsigned int)));
	else if (specifier == 'X')
		return (handle_hex_upper(va_arg(args, unsigned int)));
	else if (specifier == 'p')
		return (handle_ptr(va_arg(args, void *)));
	else if (specifier == '%')
		return (handle_pcent());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list			args;
	int				count;
	int				i;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			count += handle_specifier(format[i], args);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

// int	main(void)
// {

// 	ft_printf(" % ", );
// 	printf(" % ", );
// 	return (0);
// }