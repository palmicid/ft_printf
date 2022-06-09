#include "ft_printf.h"

void    pf_hexupper(t_data *td)
{
    unsigned int    n;
    char            *base;

    n = va_arg(td->vl, unsigned int);
    base = "0123456789ABCDEF";
    puthexnum(td, n, base);
}

void    pf_ptr(t_data *td)
{
    size_t  n;
    char    *base;

    n = va_arg(td->vl, size_t);
    base = "0123456789abcdef";
    td->tlen += write(1, "0x", 2);
    puthexnum_sizt(td, n, base);
}