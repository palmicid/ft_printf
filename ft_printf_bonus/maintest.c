#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] && !str)
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int ori;
    int alt;
    
// test declare


    if (ac == 2)
    {
        ori = printf("%s\n", av[1]);
        printf("ori = %d\n", ori);
        alt = ft_printf("%s\n", av[1]);
        printf("alt = %d\n", alt);
    }
    return (0);
}