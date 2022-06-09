#include "ft_printf.h"

void    puthexnum(t_data *td, unsigned int n, char *base)
{
    char    c;
    
    if (n >= 16)
        puthexnum(td, n / 16, base);
    c = (char)base[n % 16];
    td->tlen += write(1, &c, 1);
}

void    puthexnum_sizt(t_data *td, size_t n, char *base)
{
    char    c;
    
    if (n >= 16)
        puthexnum_sizt(td, n / 16, base);
    c = (char)base[n % 16];
    td->tlen += write(1, &c, 1);
}