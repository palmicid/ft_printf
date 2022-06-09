/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruangde <pruangde@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:27:17 by pruangde          #+#    #+#             */
/*   Updated: 2022/06/09 22:05:34 by pruangde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void process(t_data *td)
{
    int         i;
    int         ch;     // char count

    i = 0;
    ch = 0;
    while (td->fmt[td->i])  // loop until \0
    {
        if (td->fmt[td->i] == '%')
            find_spec_createlist(td);     // create list inside and add back from flag
        else
        td->tlen += write(1, &td->fmt[td->i], 1);
        td->i++;
    }
}
// last pos = present - ch  --> create list 

void    find_spec_createlist(t_data *td)
{
    td->i++;
    if (td->fmt[td->i] == 'c')
        pf_char(td);
    else if (td->fmt[td->i] == 's')
        pf_str(td);

//    else if (td->fmt[i] == 'p')
        // lst_pointer();
    else if (td->fmt[td->i] == 'd' || td->fmt[td->i] == 'i')
        pf_number(td);
    /*
    else if (td->fmt[i] == 'u')
        // lst_undeci();
    else if (td->fmt[i] == 'x')
        // lst_unhexlow();
    else if (td->fmt[i] == 'X')
        // lst_unhexup();
    else if (td->fmt[i] == '%')
        // lst_percent();       */
    else
        td->tlen = -1;
}

t_data  *init_data(t_data *td, const char *fmt)
{ 
    td->fmt = fmt;
    td->tlen = 0;
    td->i = 0;
    return (td);
}

int ft_printf(const char *fmt, ...)
{
    int         total_len;
    t_data      *td;

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
