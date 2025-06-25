/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <tvan-tui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:15:37 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/11/12 09:46:26 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int n)
{
	char	digit;
	int		count;

	count = 0;
	if (n >= 10)
		count += ft_printunsigned(n / 10);
	digit = n % 10 + '0';
	return (count + write(1, &digit, 1));
}
