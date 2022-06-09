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
    //char    c[] = "qwertyui";
    int     x = 1234567890;
  
// test declare

    ori = printf("%d\n", x);
    printf("ori = %d\n", ori);
    alt = ft_printf("%d\n", x);
    printf("alt = %d\n", alt);
    return (0);
}