#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] && !str)
        i++;
    return (i);
}

int main(void)
{
    int     ori;
    int     alt;
    char    c[] = "qwertyui";

  
// test declare

    ori = printf("%s\n", c);
    printf("ori = %d\n", ori);
    alt = ft_printf("%s\n", c);
    printf("alt = %d\n", alt);
    return (0);
}