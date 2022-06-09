/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruangde <pruangde@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:27:33 by pruangde          #+#    #+#             */
/*   Updated: 2022/06/10 03:27:28 by pruangde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_data
{
    
    const char          *fmt;                   // format
    int                 tlen;                   // total len
    va_list             vl;                     // va list
    int                 i;                      // index in fmt
}                       t_data;


// printf
// ft_printf

int     ft_printf(const char *fmt, ...);
void    process(t_data *td);
void    find_spec_createlist(t_data *td);
t_data  *init_data(t_data *td, const char *fmt);


// utils
// 1
void    pf_char(t_data *td);
void    pf_str(t_data *td);
void    pf_number(t_data *td);
void    pf_unsigned(t_data *td);
void    pf_hexlow(t_data *td);

// 2
void    pf_hexupper(t_data *td);
void    pf_ptr(t_data *td);

// libft
// 1
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t count, size_t size);
size_t  sp_strlen(const char *str, int mode);
void    sp_putnumber(t_data *td, int nb);
void    putnum_unsig(t_data *td, unsigned int n);

// 2
void    puthexnum(t_data *td, unsigned int n, char *base);
void    puthexnum_sizt(t_data *td, size_t n, char *base);



#endif