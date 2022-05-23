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
        retune (NULL);
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

size_t  ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    if (!s)
        return (i);
    while (s[i])
        i++;
    return (i);
}


