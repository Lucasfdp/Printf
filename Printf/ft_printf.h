/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:42:20 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/11 11:05:32 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <inttypes.h>
# include <stddef.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
size_t	ft_strlen(const char *str);
void	ft_puthex_lower(unsigned int n);
void	ft_puthex_upper(unsigned int n);
void	ft_putunsnbr(unsigned int nbr);
void	ft_puthex_void(void *n);
int		num_len(int num);
int		uns_num_len(unsigned int num);
int		hex_len(uintptr_t n);
int		handle_char(int c);
int		handle_str(char *str);
int		handle_pcent(void);
int		handle_int(int n);
int		handle_uint(unsigned int unbr);
int		handle_hex_upper(unsigned int n);
int		handle_hex_lower(unsigned int n);
int		handle_ptr(void *ptr);

#endif