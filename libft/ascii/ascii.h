/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ascii.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:15:43 by nosman            #+#    #+#             */
/*   Updated: 2024/06/04 09:07:41 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASCII_H
# define ASCII_H

# include "../libft.h"

int			ft_atoi(const char *str);
int			*ft_atoi_ptr(const char *str);
char		*ft_itoa(int n);
long long	ft_atoll(const char *str);
// long long	ft_atoll(char **splited_arr, const char *str, int *array);

#endif
