/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruangde <pruangde@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:27:17 by pruangde          #+#    #+#             */
/*   Updated: 2022/06/01 21:28:19 by pruangde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void process(t_data *td)
{
    int         i;
    int         ch;     // char count

    i = 0;
    ch = 0;
    while (td->fmt[i])  // loop until \0
    {
        if (td->fmt[i] == '%')
        {
            if (ch > 0)
            {
                create_lst(); // pass ch 
                ch = 0;    
            }
            find_spec_createlist(td, i);     // create list inside and add back from flag
            i += td->pflag;
        }
        else
        {
            ch++;
            i++;
        }
    }
    if (ch > 0)
        create_lst();
}
// last pos = present - ch  --> create list 

void    find_spec_createlist(t_data *td, int i)
{
    i++;
    if (td->fmt[i] == 'c')
        // lst_char();
    else if (td->fmt[i] == 's')
        // lst_str();
    else if (td->fmt[i] == 'p')
        // lst_pointer();
    else if (td->fmt[i] == 'd')
        // lst_
    else if (td->fmt[i] == 'i')
        // lst_
    else if (td->fmt[i] == 'u')
        // lst_undeci();
    else if (td->fmt[i] == 'x')
        // lst_unhexlow();
    else if (td->fmt[i] == 'X')
        // lst_unhexup();
    else if (td->fmt[i] == '%')
        // lst_percent();
    else
        // find more flag
}

t_data  *init_data(t_data *td, char *fmt)
{ 
    td->fmt = fmt;
    td->tlen = 0;
    td->lststr = NULL;
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
    // print in list and del list (del only t_str)
    total_len = print_count(td);
    // free(td);
    return (total_len);
}
