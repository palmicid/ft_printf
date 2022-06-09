/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruangde <pruangde@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:27:50 by pruangde          #+#    #+#             */
/*   Updated: 2022/06/10 04:06:29 by pruangde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	sp_putnumber(t_data *td, int nb)
{
	char			c;
	unsigned int	un;

	if (nb < 0)
	{
		td->tlen += write(1, "-", 1);
		un = nb * -1;
	}
	else
		un = nb;
	if (un >= 10)
		sp_putnumber(td, un / 10);
	c = (char)(un % 10) + '0';
	td->tlen += write(1, &c, 1);
}

void	putnum_unsig(t_data *td, unsigned int n)
{
	char	c;

	if (n >= 10)
		putnum_unsig(td, n / 10);
	c = (char)(n % 10) + '0';
	td->tlen += write(1, &c, 1);
}
