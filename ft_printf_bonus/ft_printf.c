/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruangde <pruangde@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:27:17 by pruangde          #+#    #+#             */
/*   Updated: 2022/06/10 04:11:40 by pruangde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	process(t_data *td)
{
	int	i;
	int	ch;

	i = 0;
	ch = 0;
	while (td->fmt[td->i])
	{
		if (td->fmt[td->i] == '%')
			find_spec_createlist(td);
		else
			td->tlen += write(1, &td->fmt[td->i], 1);
		td->i++;
	}
}

void	find_spec_createlist(t_data *td)
{
	td->i++;
	if (td->fmt[td->i] == 'c')
		pf_char(td);
	else if (td->fmt[td->i] == 's')
		pf_str(td);
	else if (td->fmt[td->i] == 'p')
		pf_ptr(td);
	else if (td->fmt[td->i] == 'd' || td->fmt[td->i] == 'i')
		pf_number(td);
	else if (td->fmt[td->i] == 'u')
		pf_unsigned(td);
	else if (td->fmt[td->i] == 'x')
		pf_hexlow(td);
	else if (td->fmt[td->i] == 'X')
		pf_hexupper(td);
	else if (td->fmt[td->i] == '%')
		td->tlen += write(1, "%", 1);
	else
		td->tlen = -1;
}

t_data	*init_data(t_data *td, const char *fmt)
{
	td->fmt = fmt;
	td->tlen = 0;
	td->i = 0;
	return (td);
}

int	ft_printf(const char *fmt, ...)
{
	int		total_len;
	t_data	*td;

	td = (t_data *)malloc(sizeof(t_data));
	if (!td)
		return (-1);
	va_start(td->vl, fmt);
	td = init_data(td, fmt);
	process(td);
	va_end(td->vl);
	total_len = td->tlen;
	free(td);
	return (total_len);
}
