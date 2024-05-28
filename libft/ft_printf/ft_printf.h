/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 06:11:17 by myousaf           #+#    #+#             */
/*   Updated: 2024/05/27 23:14:45 by myousaf          ###   ########.fr       */
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

void	ft_border(size_t i);

/**
 * writes an error message sent as parameters
 * exits with error code int_status.
*/
void	perr(int int_status);
void	mperr(char *str);
void	ft_error(char *str);

void	ft_print_arr(char **arr);
void	ft_print_intarr(int *arr, size_t arr_size);

#endif
