#include "ft_printf.h"

void    pf_char(t_data *td)
{
    char    c;

    c = va_arg(td->vl, int);
    td->tlen += write(1, &c, 1);
}

void    pf_str(t_data *td)
{
    char    *str;

    str = va_arg(td->vl, char*);
    while (*str)
    {
        td->tlen += write(1, str, 1);
        str++;
    }
}

void    pf_number(t_data *td)
{
    int nb;

    nb = va_arg(td->vl, int);
    sp_putnumber(td, nb);
}