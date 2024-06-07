/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:12:21 by nosman            #+#    #+#             */
/*   Updated: 2024/06/07 09:25:04 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft.h"

int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_unsignednbr(unsigned int n);
int		ft_lilx(unsigned int num);
int		ft_bigx(unsigned int num);
int		ft_ptrx(unsigned long num);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/**
 * writes an error message sent as parameters
 * exits with error code int_status.
*/
void	perr(int int_status);
void	ft_border(size_t i);

void	ft_print_arr(char **arr);
void	ft_print_intarr(int *arr, size_t arr_size);

#endif
