/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruangde <pruangde@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:27:50 by pruangde          #+#    #+#             */
/*   Updated: 2022/06/09 22:05:26 by pruangde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_bzero(void *s, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        *(char *)(s + i) = 0;
        i++;
    }
}

void    *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    if (size > sizeof(size_t))
        return (NULL);
    if (count == 0 || size == 0)
    {
        count = 1;
        size = 1;
    }
    ptr = (void *)malloc(count * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
}

// copy from gnl  XD
// mode 0 --> \0, mode 1 --> \n, mode 2 --> %
size_t  sp_strlen(const char *s, int mode)
{
    size_t  i;

    i = 0;
    if (!s)
        return (i);
    if (mode == 0)
    {
        while (s[i])
            i++;
    }
    else if (mode == 1)
    {
        while (s[i] && s[i] != '\n')
            i++;
        i++;
    }
    else if (mode == 2)
    {
        while (s[i] && s[i] != '%')
            i++;
    }
    return (i);
}

void    sp_putnumber(t_data *td, int nb)
{
    char            c;
    unsigned int    un;

    if (nb < 0)
    {
        td->tlen += write(1, "-", 1);
        un = nb * -1;
    }
    else
        un = nb;
    if (un >= 10)
        sp_putnumber(td, un / 10);
    c = (char)(un % 10) + 48;
    td->tlen += write(1, &c, 1);
}
