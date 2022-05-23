#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_strlist
{
    char                *str;
    struct s_strlist    *next;
}                       t_strlst;



// libft
// 1
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t count, size_t size);
int     ft_strlen(const char *str);

// printf
// ft_printf

int ft_printf(const char *, ...);


#endif
