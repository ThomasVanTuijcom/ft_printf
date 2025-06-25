/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <tvan-tui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:13:21 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/11/12 10:45:42 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_putnbr_hex(int nbr, char *base);
int		ft_putnbr_dec(int nbr);
int		ft_printpointer(void *ptr);
int		ft_printunsigned(unsigned int n);
int		ft_putchar(char c);
int		ft_putstr(const char *s);
char	*ft_strdup(const char *s1);

#endif
