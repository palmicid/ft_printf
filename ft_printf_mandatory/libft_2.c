/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruangde <pruangde@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 04:03:31 by pruangde          #+#    #+#             */
/*   Updated: 2022/06/10 04:04:44 by pruangde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	puthexnum(t_data *td, unsigned int n, char *base)
{
	char	c;

	if (n >= 16)
		puthexnum(td, n / 16, base);
	c = (char)base[n % 16];
	td->tlen += write(1, &c, 1);
}

void	puthexnum_sizt(t_data *td, size_t n, char *base)
{
	char	c;

	if (n >= 16)
		puthexnum_sizt(td, n / 16, base);
	c = (char)base[n % 16];
	td->tlen += write(1, &c, 1);
}
