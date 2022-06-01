/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruangde <pruangde@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:27:33 by pruangde          #+#    #+#             */
/*   Updated: 2022/06/01 21:28:37 by pruangde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct  s_str
{
    char            *str;
    struct s_str    *next;
}                   t_str;

typedef struct s_data
{
    
    char                *fmt;
    int                 tlen;
    va_list             vl;
    t_str               *lststr;
    int                 pflag;
    int                 lpos
}                       t_data;



// libft
// 1
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t count, size_t size);
size_t  sp_strlen(const char *str, int mode);
void    find_spec_createlist(t_data *td, int i);

// printf
// ft_printf

int     ft_printf(const char *fmt, ...);
void    process(t_data *td);
t_data  *init_data(t_data *td, char *fmt);

//t_strlst    *print_count(t_strlst *start, int *tlen);

// utils_1

#endif
